#include <stdio.h>

void main(void)
{

	int day, week, days;

	printf("Enter a days: ");
	scanf("%d", &days);

	while (days > 0)
	{
		week = days / 7;
		day = days % 7;
		printf("%d days are %d weeks, %d days\n", days, week, day);
		printf("Enter a days: ");
		scanf("%d", &days);
	}


}
