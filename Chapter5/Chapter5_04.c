#include <stdio.h>

void main(void)
{


	float cm, inch;
	int feet;
	printf("Enter a height in centimeters: ");
	scanf("%f", &cm);

	while (cm > 0)
	{
		feet = cm / 2.54 / 12;
		inch = cm / 2.54 - feet * 12;
		printf("%.1f cm = %d feet, %.1f inches\n", cm, feet, inch);

		printf("Enter a height in centimeters (<=0 to quit): ");
		scanf("%f", &cm);
	}

}
