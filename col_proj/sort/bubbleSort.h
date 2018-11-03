

int* bubble(int a[], int y) {
	_Bool q = true;
	while (q) { 
		q = false;
		for (int i = 0; i < y - 1; i++) {
			if (a[i] > a[i + 1]) {
				q = true;
				int temp = a[i];
				a[i] = a[i + 1];
				a[i+ 1] = temp;
			}
		}
	}
}

