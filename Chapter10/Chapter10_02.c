#include <stdio.h>

void copy_arr(double *a, double *b, int n);
void copy_ptr(double *a, double *b, int n);
void copy_ptrs(double *a, double *b, double *c);

int main(void) {
	double  source[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double target1[5];
	double target2[5];
	double target3[5];

	copy_arr(target1, source, 5);
	copy_ptr(target2, source, 5);

	copy_ptrs(target3, source, source + 5);

	for (int i = 0; i < 5; i++) {
		printf("%5.1f|%5.1f|%5.1f\n", target1[i], target2[i], target3[i]);
	}
	return 0;
}

void copy_arr(double *a, double *b, int n) {
	for (int i = 0; i < n; i++) {
		a[i] = b[i];
	}
}

void copy_ptr(double *a, double *b, int n) {
	for (int i = 0; i < 5; i++) {
		*(a + i) = *(b + i);
	}
}

void copy_ptrs(double *a, double *b, double *c) {
	for (double *ptr = b; ptr < c; ptr++, a++) {
		*a = *ptr;
	}
}