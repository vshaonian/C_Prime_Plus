#include <stdio.h>

int arr1[5] = { 1,3,5,7,9 };
int arr2[5] = { 2,4,6,8,0 };
int result[5];

void arr_add(int *arr1, int*arr2, int*result, int n);

int main(void) {
	arr_add(arr1, arr2, result, 5);

	for (int i = 0; i < 5; i++) {
		printf("%5d|%5d|%5d|\n", arr1[i], arr2[i], result[i]);
	}

	return 0;
}

void arr_add(int *arr1, int*arr2, int*result, int n) {
	for (int i = 0; i < n; i++) {
		result[i] = arr1[i] + arr2[i];
	}
}