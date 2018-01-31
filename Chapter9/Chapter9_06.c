#include <stdio.h>

void change(double * a, double * b, double * c);

void main(void)
{
    double a, b, c;

    printf("Enter the first number: \n");
    scanf("%lf", &a);
    printf("Enter the second number: \n");
    scanf("%lf", &b);
    printf("Enter the third number: \n");
    scanf("%lf", &c);
    printf("The numbers are %.2f %.2f %.2f\n", a, b, c);

    change(&a, &b, &c);

    printf("Now the numbers are %.2f %.2f %.2f\n", a, b, c);
}

void change(double * a, double * b, double * c)
{
    double max, middle, min;

    if(*a > *b)
    {
        if(*a > *c)
        {
            max = *a;
            min = (*b > *c) ? *c : *b;
            middle = (*b > *c) ? *b : *c;
        }
        else
        {
            max = *c;
            min = *b;
            middle = *a;
        }
    }
    else
    {
        if(*c < *b)
        {
            max = *b;
            min = (*a > *c) ? *c : *a;
            middle = (*a > *c) ? *a : *c;
        }
        else
        {
            max = *c;
            min = *a;
            middle = *b;
        }
    }

    *a = min;
    *b = middle;
    *c = max;
}
