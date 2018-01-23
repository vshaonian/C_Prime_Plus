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
		sum = sum + count * count;
	}

	printf("%d day = %d\n", day, sum);

}
