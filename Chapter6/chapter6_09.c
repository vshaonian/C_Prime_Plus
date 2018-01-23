#include <stdio.h>

double calculate(double i, double j);

void main(void)
{

    double first, second;

    printf("Enter two double number: ");

    while(scanf("%lf %lf", &first, &second) == 2)
    {
        printf("The result is %lf\n", calculate(first, second));
    }
}

double calculate(double i, double j)
{
    return (i - j) / (i * j);
}
