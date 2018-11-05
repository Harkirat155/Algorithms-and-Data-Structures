#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
<<<<<<< HEAD
#include <math.h>
=======
>>>>>>> 8c60109a21df853d6e3d3606c6b1628e52b80883
 

#include "bubbleSort.h"
#include "insertionSort.h"
<<<<<<< HEAD
#include "selectionSort.h"
#include "mergeSort.h"

=======
>>>>>>> 8c60109a21df853d6e3d3606c6b1628e52b80883

int a[];

int main() {
	int len = 0;
<<<<<<< HEAD
	printf("\nenter size of array: ");
=======
	printf("enter size of array: ");
>>>>>>> 8c60109a21df853d6e3d3606c6b1628e52b80883
	scanf("%d", &len);
	int* q = malloc(len + 1);
	*a = (int *)q;
	printf("Enter elements of array: \n");
	for (int l = 0; l < len; l++) {
		printf("\t%d: ", l + 1);
		if (scanf("%d: ", &a[l]));
		else a[l] = 0;
	}
	a[len] = '\0';
	printf("\n");
	label:
	printf("Which sorting algorithm would you like using: \n");
<<<<<<< HEAD
	printf("\t1: Bubble Sort\n");
	printf("\t2: Insertion Sort\n");
	printf("\t3: Selection Sort\n");
	printf("\t4: Merge Sort\n");
=======
	printf("	1: Bubble Sort\n");
	printf("	2: Insertion Sort\n");
>>>>>>> 8c60109a21df853d6e3d3606c6b1628e52b80883
	int opt = -1;
	printf("Enter option(the integer corresponding to your choice): ");
	scanf("%d", &opt);
	printf("\n");
	switch(opt) {
		case 1: bubble(a, len);
		break;
		case 2: insertion(a, len);
		break;
<<<<<<< HEAD
		case 3: selection(a, len);
		break;
		case 4: merge(a, 0, len);
		break;
=======
>>>>>>> 8c60109a21df853d6e3d3606c6b1628e52b80883
		case -1: printf("Choose an option by typing corresponding integer!\n");
		goto label;
		break;
		default: printf("not that many options yet, STOP KIDDING!!");
<<<<<<< HEAD
		goto label;
=======
>>>>>>> 8c60109a21df853d6e3d3606c6b1628e52b80883
		break;
	}
	printf("Here's the sorted array for you :) : \n");
	for (int l = 0; l < len; l++) {
		printf("\t%d: %d\n", l + 1, a[l]);
	}
	printf("\n");
	return 0;
}
