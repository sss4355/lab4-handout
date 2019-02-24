/* CMSC 16200 - lab 4
 * File: unionfind.c 
 * The Union Find implementation using up-trees.
 */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "lib/unionfind.h"

/* Find and return the index of the root of the pixel with pixelID idx. */
pixelID up_trees_find(pixelID parentID[ROWS][COLS], unsigned int w, pixelID idx) {
    return idx;
}

/* Merge the two groups to which pixel p1 and pixel p2 belong. */
void up_trees_union(pixelID parentID[ROWS][COLS], unsigned int w, pixelID p1, pixelID p2) {
    return;
}

/* Store forest of up-trees in the array parentID, given the graph G. */
void up_trees_new(graph G, pixelID parentID[ROWS][COLS]) {
    return;
}

/* 
 * Run UNION-FIND, and store the final forest of up-trees in array parentID,
 * where count is a boolean flag indicating whether to print out the count. 
 */
void run_union_find(graph G, pixelID parentID[ROWS][COLS], bool count) {
    return;
}
