#include <stdio.h>

double min(double x, double y);

void main(void)
{
    double a, b;
    printf("Enter two double numbers: \n");
    scanf("%lf%lf", &a, &b);
    printf("The min is %lf\n", min(a,b));
}

double min(double x, double y)
{
    return (x > y) ? x : y;
}
