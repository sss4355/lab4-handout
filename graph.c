/* CMSC 16200 - lab 4
 * File: graph.c 
 * The strict pixel graph and its implementation.
 */

#include <stdlib.h>
#include <stdio.h>
#include "lib/graph.h"

/*
 * Depending on your implementation, 
 * You might want to define helper functions, such as:
 *  - bool is_vertex(graph G, pixelID v);
 *  - bool is_pixel_graph(struct pixel_graph_header *G);
 *  - bool pixel_graph_isedge(graph G, pixelID v, pixelID w); 
 *  - etc.
 * for testing your graph implementation.
 */

// Allocate enough space for the graph, and initialize its required fields.
graph pixel_graph_new(unsigned int img_width, 
                      unsigned int img_height, 
                      pixel pixels[ROWS][COLS]) {
    // Your implementation here.
    return NULL;
}

// Free up the memory used by graph G.
void pixel_graph_free(graph G) {
    // Your implementation here.
    return;
}

