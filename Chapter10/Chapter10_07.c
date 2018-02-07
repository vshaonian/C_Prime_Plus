#include <stdio.h>

void copy_arr(double (*a)[12], double (*b)[12], int n, int m);

int main(void) {

	double rain[5][12] =
	{
		{ 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
		{ 8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3 },
		{ 9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4 },
		{ 7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2 },
		{ 7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2 }
	};

	double result_arr[5][12];

	copy_arr(rain, result_arr, 5, 12);
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 12; j++) {
			printf("%5.1f",rain[i][j]);
		}
		printf("\n");
	}

	printf("******************************************\n");

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 12; j++) {
			printf("%5.1f", result_arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}

void copy_arr(double (*a)[12], double (*b)[12], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			//b[i][j] = a[i][j];
			*(*(b + i) + j) = *(*(a + i) + j);
		}
	}
}