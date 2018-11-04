#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 

#include "bubbleSort.h"
#include "insertionSort.h"
#include "selectionSort.h"


int a[];

int main() {
	int len = 0;
	printf("\nenter size of array: ");
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
	printf("\t1: Bubble Sort\n");
	printf("\t2: Insertion Sort\n");
	printf("\t3: Selection Sort\n");
	int opt = -1;
	printf("Enter option(the integer corresponding to your choice): ");
	scanf("%d", &opt);
	printf("\n");
	switch(opt) {
		case 1: bubble(a, len);
		break;
		case 2: insertion(a, len);
		break;
		case 3: selection(a,len);
		break;
		case -1: printf("Choose an option by typing corresponding integer!\n");
		goto label;
		break;
		default: printf("not that many options yet, STOP KIDDING!!");
		break;
	}
	printf("Here's the sorted array for you :) : \n");
	for (int l = 0; l < len; l++) {
		printf("\t%d: %d\n", l + 1, a[l]);
	}
	printf("\n");
	return 0;
}
