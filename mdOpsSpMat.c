#include <stdio.h>
#include <string.h>
#include <ctype.h>

int eleInSpMat(int n);
void entEle(int x[][3], int y);
void priMat(int x[][3], int y);
void addMat(int x[][3], int v[][3], int y);
void subMat(int x[][3], int v[][3], int y);

int main(void){
	int m;
	char c;
	printf("\n\n\nPROGRAM TO IMPLEMENT ADDITION AND SUBTRACTION OF TWO LOWER TRIANGULAR MATRICES USING SRARSE MATRIX\n\n\n");
	do {
		printf("Enter dimension of square matrix(should be >-1 AND <20): ");
		scanf("%d", &m);
	} while (m < 0 || m > 20);
	printf("\n");
	int s = eleInSpMat(m);
	int a[s][3], b[s][3];
	label:
	printf("Give the operation to be done addition(A) or subtraction(S)\n");
	printf("(Second matrix will be subracted from the FIRST): ");
	do {
		scanf("%c", &c);
	} while (!strcmp(tolower(c), 'a') || !strcmp(tolower(c), 's'));
	printf("\n");
	if (c == 'a') addMat(a, b, s);
	else if (c == 's') subMat(a, b, s);

//	switch(tolower(c)) {
//		case (if (c == 'a')): 
//			addMat(a, b, s);
//		break;
//	case (if (c == 's')):
//		subMat(a, b, s);
//		break;
//	default:
	else{
		printf("Enter From within the options.");
		goto label;
	}
	printf("FIRST matrix: \n");
	entEle(a, m);
	printf("\n");
	printf("SECOND matrix: \n");
	entEle(b, m);
	printf("\n");
	printf("Matrices entered are: \n");
	printf("First Matrix:\n");
	priMat(a, m);
	printf("Second Matrix:\n");
	priMat(b, m);
	printf("RESULT!\n");
	if (c == 'a' || c == 'A') {
		printf("Addition of input matrices give:\n");
		priMat(a, m);
	}	
	else {
		printf("Second Matrix:\n");
		priMat(b, m);
	}	
}

int eleInSpMat (int n){
	if (n == 0) return 0;
	if (n == 1) return 1;
	if (n == 2) return 3;
	if (n == 3) return 6;
	else {
		return eleInSpMat(n - 1) + eleInSpMat(n - 2);
	}
}

void entEle (int x[][3], int y){
	int ele = 0;
	for (int i = 0; i < y; i++) {
		for (int j = 0; j <= i; j++) {
			printf("Enter VALUE belonging to element (%d, %d): ", i, j);
			scanf("%d", &x[ele][2]);
			ele++;
		}
	}
}

void addMat (int x[][3], int v[][3], int y) {
	for (int i = 0; i < y; i++) x[i][2] += v[i][2];
}

void subMat (int x[][3], int v[][3], int y) {
	for (int i = 0; i < y; i++) x[i][2] -= v[i][2];
}

void priMat (int x[][3], int y){
	int ele = 0;
	for (int i = 0; i < y; i++) {
		printf("[");
		for (int j = 0; j < y; j++) {
			if (i < j) printf(" 0 ");
			else {
			    printf(" %d ", x[ele][2]);
			    ele++;
		    }
		}
		printf("]\n");
	}
}





