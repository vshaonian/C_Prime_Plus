#include <stdio.h>

void Temperatures(double n);

void main(void)
{
	double number;

	while (scanf("%lf", &number) == 1)
	{

		Temperatures(number);
	}
}

void Temperatures(double n)
{

	const double k = 273.16;
	const double c1 = 5.0;
	const double c2 = 9.0;
	const double c3 = 32.0;

	double sheshi = c1 / c2 * (n - c3);
	double kaierwen = sheshi + k;

	printf("%.2f\t%.2f\t%.2f\n", n, sheshi, kaierwen);
}
