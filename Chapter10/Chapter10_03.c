#include <stdio.h>

int arr[10] = {1, 24, 6, 7, 8, 12, 532, 43, 5, 6};

int find_max(int *a, int n);

int main(void) {
	printf("the max number is %d\n", find_max(arr, 10));
	return 0;
}

int find_max(int *a, int n) {
	int max = *a;
	for (int i = 1; i < n; i++) {
		if (*(a + i) > max) {
			max = *(a + i);
		}
	}
	return max;
}