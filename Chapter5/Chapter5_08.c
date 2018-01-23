#include <stdio.h>

void main(void)
{

	int so, fo;
	printf("Enter an integer to server as the second operand: ");
	scanf("%d", &so);
	printf("Now enter the first operand: ");
	scanf("%d", &fo);

	while (fo > 0)
	{
		printf("%d %% %d is %d\n", fo, so, fo % so);
		printf("Enter next number for first operand (<= 0 to quit):");
		scanf("%d", &fo);
	}
}
