#include <stdio.h>

double arr[5] = { 2.3,4.3,4.6,2.6,2.6 };

double diff(double *a, int n);

int main(void) {
	printf("The diff between max and min is %.1f\n", diff(arr, 5));
	return 0;
}

double diff(double *a, int n) {
	double min = *a;
	double max = *a;
	for (int i = 1; i < n; i++) {
		if (*(a + i) < min) {
			min = *(a + i);
		}
		else if(*(a+i) > max)
		{
			max = *(a + i);
		}
	}

	return max - min;
}