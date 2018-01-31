#include <stdio.h>

double average(double a, double b);

void main(void)
{
    double a, b;
    printf("Enter two double numbers: \n");
    scanf("%lf%lf", &a, &b);
    printf("The average is %.2f\n", average(a, b));
}

double average(double a, double b)
{
    double temp = (1 / a + 1 / b) / 2;
    return 1 / temp;
}
