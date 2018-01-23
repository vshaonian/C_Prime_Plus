#include <stdio.h>

void lifang(double n);

void main(void)
{
	printf("Enter a double number: ");
	double number;
	scanf("%lf", &number);
	lifang(number);
}

void lifang(double n)
{
	printf("%f", n * n * n);
}
