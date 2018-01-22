#include <stdio.h>

void main(void)
{
	float value;
	printf("Enter a floating-point: ");
	scanf("%f", &value);
	printf("\nfixed-point notation: %f\n", value);
	printf("exponential notation: %e\n", value);
	printf("p notation: %a", value);
}
