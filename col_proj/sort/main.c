#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "bubbleSort.h"
#include "insertionSort.h"
#include "mergeSort.h"

int a[];

void main() {
	int len = 0;
	printf("enter size of array: ");
	scanf("%d", &len);
	int* q = malloc(len + 1);
	*a = q;
  printf("Enter elements of array: \n");
	for (int l = 0; l < len; l++) {
		if (scanf("%d", &a[l]));
		else a[l] = 0;
	}
	a[len] = '\0';
	bubble(a, len);
	for (int l = 0; l < len; l++) {
		printf("%d: %d\n", l, a[l]);
	}
}
