/*****************************************************************************
 * CMP_SC 3050
 * FS 2022
 * Assignment #1
 * main.c
 * By Jim Ries
 ******************************************************************************/

// Includes
#include <stdio.h>
#include "sort.h"

// Main entry point
int main(void)
{
	// Run the tests
	printf("\n\nInsertion Sort:\n");
	printf("--------------\n");
	RunTests(insertionsort, false);

	printf("\n\nHeap Sort:\n");
	printf("--------------\n");
	RunTests(heapsort, false);

	printf("\n\nQuick Sort:\n");
	printf("--------------\n");
	RunTests(qsort, false);

	printf("\n\nBubble Sort:\n");
	printf("--------------\n");
	RunTests(bubblesort, false);
}
