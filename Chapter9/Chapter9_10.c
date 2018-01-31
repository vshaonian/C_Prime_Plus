#include <stdio.h>

void to_base_n(unsigned long n, int p);

void main(void)
{
    unsigned long number;
    int p;

    printf("Enter tow integers (q to quit):\n");

    while(scanf("%lu%d", &number, &p) == 2)
    {
        to_base_n(number, p);
        putchar('\n');
        printf("Enter two integers (q to quit):\n");
    }

    printf("Done.\n");

}

void to_base_n(unsigned long n, int p)
{
    int r;

    r = n % p;

    if(n >= p)
    {
        to_base_n(n / p, p);
    }

    printf("%d", r);
}
