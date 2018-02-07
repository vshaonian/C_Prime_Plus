#include <stdio.h>

double arr[5] = { 2.3,5.3,2.4,5.3,2.6 };

void reverse(double *a, int n);

int main(void) {
	for (int i = 0; i < 5; i++) {
		printf("%.1f  ", arr[i]);
	}
	printf("\n");

	reverse(arr, 5);

	for (int i = 0; i < 5; i++) {
		printf("%.1f  ", arr[i]);
	}
	
	printf("\n");

	return 0;
}

void reverse(double *a, int n) {
	for (int i = 0; i < n / 2; i++) {
		double temp = *(a + i);
		*(a + i) = *(a + n - i - 1);
		*(a + n - i) = temp;
	}
}