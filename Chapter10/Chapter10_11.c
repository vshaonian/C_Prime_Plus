#include <stdio.h>

void show(int(*arr)[5], int n);
void ddouble(int(*arr)[5], int n);

int arr[3][5] = 
{
	{1,2,3,4,5},
	{2,4,6,7,8},
	{8,6,3,2,6}
};

int main(void) {
	show(arr, 3);
	ddouble(arr, 3);
	show(arr, 3);
	return 0;
}

void show(int(*arr)[5], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%5d|", arr[i][j]);
		}
		printf("\n");
	}
}

void ddouble(int(*arr)[5], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 5; j++) {
			arr[i][j] *= 2;
		}
	}
}






