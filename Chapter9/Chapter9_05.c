#include <stdio.h>

void large_of(double * a, double * b);

void main(void)
{
    double a, b;
    printf("Enter two double numbers: \n");
    scanf("%lf%lf", &a, &b);
    large_of(&a, &b);
    printf("a is %.2f and b is also is %.2f\n", a, b);

}

void large_of(double * a, double * b)
{
    (*a > *b) ? (*b = *a) : (*a = *b);

}
