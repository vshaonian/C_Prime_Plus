#include <stdio.h>

unsigned long Fibonacci(unsigned n);

void main(void)
{
    unsigned n;

    printf("Enter an integer to calculate: \n");
    scanf("%u", &n);
    printf("The Fibonacci number is %lu\n", Fibonacci(n));
}

unsigned long Fibonacci(unsigned n)
{
    unsigned long first, second, result;
    first = second = 1;

    for(int i = 3; i <= n; i++)
    {
        result = first + second;
        first = second;
        second = result;
    }

    return result;
}
