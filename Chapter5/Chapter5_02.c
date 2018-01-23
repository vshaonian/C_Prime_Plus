#include <stdio.h>

void main(void)
{

	int num;
	printf("Enter a num:");
	scanf("%d", &num);
	int i = num;

	while (i++ < num + 11)
	{
		printf("\t%d", i - 1);
	}
}
