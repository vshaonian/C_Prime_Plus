#include <stdio.h>

void copy_arr(int rows, int cols, double arr[rows][cols], double target[rows][cols]);

int main(void) {
	double rain[3][5] =
	{
		{ 4.3, 4.3, 4.3, 3.0, 2.0 },
	{ 8.5, 8.2, 1.2, 1.6, 2.4 },
	{ 9.1, 8.5, 6.7, 4.3, 2.1 }
	};

	double result_arr[3][5];

	copy_arr(3, 5, rain, result_arr);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%5.1f|", rain[i][j]);
		}
		printf("\n");
	}

	printf("********************************************\n");

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%5.1f|", result_arr[i][j]);
		}
		printf("\n");
	}


	return 0;
}

void copy_arr(int rows, int cols, double arr[rows][cols], double target[rows][cols]) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			target[i][j] = arr[i][j];
		}
	}
}
