#include <stdio.h>

void main(void)
{

	int count, sum, day;

	count = 0;
	sum = 0;

	printf("Enter a day:");
	scanf("%d", &day);

	while (count++ < day)
	{
		sum = sum + count;
	}

	printf("%d day'sum = %d\n", day, sum);

}
