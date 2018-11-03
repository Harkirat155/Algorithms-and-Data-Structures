

int iSwap(int x[], int w, int s, int p);

int* insertion(int a[], int y) {
	for (int i = 0; i < y; i++) {
		for (int l = 0; l <= i; l++) {
			if (a[i] >= a[l]) {
				continue;
			}
			else {
				iSwap(a, y, l, i - 1);
				break;
			}
		}
	}
}

int iSwap(int a[], int y, int from, int to) {
	if (from > y || to > y) return -1;
	int temp = a[to + 1];
	int b = 0;
	for (b = to; b >= from && b < y; b--) {
		a[b + 1] = a[b];
	}
	a[from] = temp;
	return 0;
}