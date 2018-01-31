#include <stdio.h>

double power(double n, int p);

void main(void)
{
    double x, xpow;
    int exp;

    printf("Enter a number and the integer power");
    printf("to which\nthe number will be rasied. Enter q");
    printf(" to quit.\n");

    while(scanf("%lf%d", &x, &exp) == 2)
    {
        xpow = power(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }

    printf("Hope you enjoy this power trip -- byee!\n");
}

double power(double n, int p)
{
    double result = 1;

    if(n == 0)
    {
        result = 0;
    }
    else
        if(p == 0)
        {
            result = 1;
        }

    for(int i = 0; i < p; i++)
    {
        result *= n;
    }

    return result;
}
