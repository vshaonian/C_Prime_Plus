#include <stdio.h>

void main(void)
{
	int aa;
	printf("Please input an ASCII code: ");
	scanf_s("%d", &aa);
	printf("The char for %d is %c", aa, aa);
}

