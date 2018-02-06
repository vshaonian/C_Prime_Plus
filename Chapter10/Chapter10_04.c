#include <stdio.h>

double arr[5] = { 3.3,2.5,6.3,14.6,7.8 };

int find_max(double *a, int n);

int main(void) {
	printf("The index is %d\n", find_max(arr, 5));
	return 0;
}

int find_max(double *a, int n) {
	int index = -1;
	int max = *a;
	for (int i = 1; i < n; i++) {
		if (*(a + i) > max) {
			max = *(a + i);
			index = i;
		}
	}

	return index;
}