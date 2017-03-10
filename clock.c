#include <stdio.h>
#include <assert.h>
#include <unistd.h>
#include <getopt.h>
#include <stdlib.h>
#include "pagetable.h"


extern int memsize;

extern int debug;

extern struct frame *coremap;

int clock_arm = 0; // Current position of the clock arm

/* Page to evict is chosen using the clock algorithm.
 * Returns the page frame number (which is also the index in the coremap)
 * for the page that is to be evicted.
 */

int clock_evict() {

    // Start from the next page where we left of
    clock_arm = (clock_arm + 1) % memsize;

    // Search for a page with REF bit set to off
    while (coremap[clock_arm].pte->frame & PG_REF) {

		coremap[clock_arm].pte->frame &= ~PG_REF;
		clock_arm = (clock_arm + 1) % memsize;
	}
	
	return clock_arm;
}

/* This function is called on each access to a page to update any information
 * needed by the clock algorithm.
 * Input: The page table entry for the page that is being accessed.
 */
void clock_ref(pgtbl_entry_t *p) {
	p->frame |= PG_REF; // Set REF bit for this page to ON
}

/* Initialize any data structures needed for this replacement
 * algorithm. 
 */
void clock_init() {
}
