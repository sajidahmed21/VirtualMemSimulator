#include <stdio.h>
#include <assert.h>
#include <unistd.h>
#include <getopt.h>
#include <stdlib.h>
#include "pagetable.h"

#define MAXLINE 256

#define NO_REFERENCE_FOUND 0

extern int memsize;

extern int debug;

extern struct frame *coremap;

extern char* tracefile;

// Linked list node representing a virtual address reference in the trace
typedef struct vaddr_list_node {
	
	addr_t vaddr; // Single virtual address reference from trace file
	struct vaddr_list_node *next; // Reference to next address in linked list
	
} vaddr_node;


// Reference to virtual address entry that will be accessed next
vaddr_node *head;


/* Page to evict is chosen using the optimal (aka MIN) algorithm. 
 * Returns the page frame number (which is also the index in the coremap)
 * for the page that is to be evicted.
 */
int opt_evict() {	
	// Number of frames in memory for which their
	// next reference in trace has been found
	long num_found = 0;
	
	// An array containing the time in future (in terms of reference counts)
	// before the page in each frame is referenced again.
	long *distances = calloc(memsize, sizeof(long));
	
	vaddr_node *curr = head;
	
	// The distance of a reference in future.
	// Used to assign the time each page in the frames will be accessed again.
	long ref_count;
	
	// Assign 'distance' (i.e. time till next access) to each frame
	for (ref_count = 1; num_found < memsize && curr != NULL; ref_count++) {
		int frame_index = get_frame_index(curr->vaddr);
		
		if (frame_index != PAGE_NOT_IN_MEMORY) {
			
			if (distances[frame_index] == NO_REFERENCE_FOUND) {
				distances[frame_index] = ref_count;
				num_found++;
			}
		}
		curr = curr->next;
	}
	
	int evict_frame = 0;
	long max_distance = distances[0];
	
	// Search for the page that is accessed furthest away in the future,
	// or never accessed again
	long i;
	for (i = 1; i < memsize && max_distance != NO_REFERENCE_FOUND; i++) {
		
		if ((distances[i] == NO_REFERENCE_FOUND) ||
			(distances[i] > max_distance)) {
			
			evict_frame = i;
			max_distance = distances[i];
		}
	}
	
	free(distances);
	
	return evict_frame;
}

/* This function is called on each access to a page to update any information
 * needed by the opt algorithm.
 * Input: The page table entry for the page that is being accessed.
 */
void opt_ref(pgtbl_entry_t *p) {
	// Increment the pointer current_ref to point to the next virtual address
	// in the trace
	vaddr_node *current_ref = head;
	head = head->next;
	
	free(current_ref);
	
}

/* Loads the virtual addresses in the trace file onto memory.
 * This allows quicker lookups as opposed to frequent reads from a file.
 */
void opt_init() {
	FILE *trace_file = fopen(tracefile, "r");
	
	if (trace_file == NULL) {
		perror("OPT: Error opening tracefile:");
		exit(EXIT_FAILURE);
	}
	
	char buf[MAXLINE];

	// ---------------------------------------------------------------------
	// Read the first entry outside of the second while loop below to reduce
	// overhead from null checks on each iteration
	
	do {
		if (fgets(buf, MAXLINE, trace_file) == NULL) {
			// No entry in trace file
			return;
		}
	} while (buf[0] == '='); // Get rid of any comments at beginning of file
	
	head = malloc(sizeof(vaddr_node));
	head->next = NULL;
	sscanf(buf, "%*c %lx", &(head->vaddr));
	// ---------------------------------------------------------------------
	
	// Read the next entries in the file
	vaddr_node *curr = head;
	while (fgets(buf, MAXLINE, trace_file) != NULL) {
		if (buf[0] != '=') {
			curr->next = malloc(sizeof(vaddr_node));
			curr = curr->next;
			curr->next = NULL;

			sscanf(buf, "%*c %lx", &(curr->vaddr));
		}
	}
}
