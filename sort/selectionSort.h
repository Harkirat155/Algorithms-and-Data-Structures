

int* selection(int a[], int y) {
	printf("\n\n\n");
		for (int d = 0; d < y; d++) printf("%d\n", a[d]);
		printf("\n\n\n");
		for (int i = 0; i < y- 1; i++) {
		int small = i;
		int l = i;
		for (l = i + 1; l < y; l++) {
			if (a[small] > a[l]) small = l; 
		}
		int temp = a[small];
		a[small] = a[i];
		a[i] = temp;
		printf("\n\n\n");
		for (int d = 0; d < y; d++) printf("%d\n", a[d]);
		printf("\n\n\n");
	}
}