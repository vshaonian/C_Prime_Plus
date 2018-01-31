#include <stdio.h>

double power2(double n, int p);

void main(void)
{
    double x, xpow;
    int exp;

    printf("Enter a number and the integer power");
    printf("to which\nthe number will be rasied. Enter q");
    printf(" to quit.\n");

    while(scanf("%lf%d", &x, &exp) == 2)
    {
        xpow = power2(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }

    printf("Hope you enjoy this power trip -- byee!\n");
}

double power2(double n, int p)
{

    if(n == 0)
    {
        return 0;
    }
    else
        if(p == 0)
        {
            return 1;
        }
        else
        {
            return n * power2(n, p - 1);
        }
}
