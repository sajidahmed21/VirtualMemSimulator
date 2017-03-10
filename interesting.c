#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#define NUM_PAGES 20000

/* A program that accesses a new page each time
   that (given a small memory size) is most likely not on physical memory. */

int main() {
    int page_size = getpagesize();

    // Allocate NUM_PAGES worth of data
    int data_size = NUM_PAGES * page_size;
    char *data = malloc(data_size);

    if (data == NULL) {
        perror("Could not allocate memory\n");
        exit(EXIT_FAILURE);
    }

    // Write data to a different page every time
    int page;
    for (page = 0; page < NUM_PAGES; page++) {
        data[page * page_size] = 0;
    }

    // Read data from a different page every time
    for (page = 0; page < NUM_PAGES; page++) {
        (void) data[page * page_size];
    }

    // Write data from a different page every time
    for (page = 0; page < NUM_PAGES; page++) {
        data[page * page_size] = 0;
    }

    return EXIT_SUCCESS;
}
