#include <stdio.h>
#include <assert.h>
#include <unistd.h>
#include <getopt.h>
#include <stdlib.h>
#include "pagetable.h"


extern int memsize;

extern int debug;

extern struct frame *coremap;

struct frame *head = NULL;
struct frame *tail = NULL;

/* Page to evict is chosen using the accurate LRU algorithm.
 * Returns the page frame number (which is also the index in the coremap)
 * for the page that is to be evicted.
 */

int lru_evict() {
	
	if (head == NULL) {
		fprintf(stderr, "ERROR: No page to evict.\n");
		exit(1);
	}
	
	// The least reecently accessed frame is the one at the head of the linked list
	int frame_number = head->pte->frame >> PAGE_SHIFT;
	
	if (head == tail) {
		tail = NULL;
	}
	
	head = head->next;
	
	return frame_number;
}

/* This function is called on each access to a page to update any information
 * needed by the lru algorithm.
 * Input: The page table entry for the page that is being accessed.
 */
void lru_ref(pgtbl_entry_t *p) {
	int frame_index = p->frame >> PAGE_SHIFT;
	
	struct frame *frame = coremap + frame_index;
	
	if (tail == frame) { // This page is already the most recently used
		return;
	}
	
	if (head == NULL && tail == NULL) { // Only one referenced page
		head = frame;
		tail = frame;
		return;
	}
	
	if (frame != head && frame != tail) { // Frame is in between two nodes
		if (frame->prev != NULL) {
			frame->prev->next = frame->next;
		}
		if (frame->next != NULL) {
			frame->next->prev = frame->prev;
		}
	}
	
	else if (frame == head && frame != tail) {
		head = head->next;
		head->prev = NULL;
	}
	
    // Move 'frame' to the tail of the linked list, to reflect that
	// it contains the most recently accessed page
	tail->next = frame;
	frame->prev = tail;
	tail = frame;
}


/* Initialize any data structures needed for this 
 * replacement algorithm 
 */
void lru_init() {
}
