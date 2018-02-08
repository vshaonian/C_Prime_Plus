#include <stdio.h>

void input_arr(double(*arr)[5], int n);
double row_average(double *arr, int n);
double average(double(*arr)[5], int n);
double find_max(double(*arr)[5], int n);

int main(void) {
	double arr[3][5];
	input_arr(arr, 3);
	for (int i = 0; i < 3; i++) {
		printf("The %d arr's average is %.2lf\n", i + 1, row_average(arr[i], 3));
	}

	printf("The total averge is %.2f\n", average(arr, 3));
	printf("The max number is %.2f\n", find_max(arr, 3));
	return 0;
}

void input_arr(double(*arr)[5], int n) {
	for (int i = 0; i < n; i++) {
		printf("Enter the %d arr\n", i + 1);
		for (int j = 0; j < 5; j++) {
			scanf("%lf", &arr[i][j]);
		}
	}
}

double row_average(double *a, int n) {
	double total = 0;
	for (int i = 0; i < n; i++) {
		total += a[i];
	}
	return total / n;
}

double average(double(*arr)[5], int n) {
	double total = 0;
	for (int i = 0; i < n; i++) {
		total += row_average(arr[i],5);
	}

	return total / n;
}

double find_max(double(*arr)[5], int n) {
	double max = arr[0][0];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
			}
		}
	}
	return max;
}




