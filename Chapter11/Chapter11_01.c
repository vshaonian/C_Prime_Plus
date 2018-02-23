#include <stdio.h>

char *get_arr(char *arr, int n);

int main(void) {
	char arr[80] = "hello world";

	get_arr(arr,80);
	puts(arr);
	return 0;
}

char *get_arr(char *arr, int n) {
	printf("Enter %d char, please: \n", n);
	int ct = 0;
	char ch = getchar();
	while (ch!=EOF)
	{
		*(arr + ct) = ch;
		ct++;
		ch = getchar();
	}
	return *arr;
}