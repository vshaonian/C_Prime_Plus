#include <stdio.h>

void main(void)
{

    double first, second;

    printf("Enter two double number: ");

    while(scanf("%lf %lf", &first, &second) == 2)
    {
        printf("The result is %lf\n", (first - second) / (first * second));
    }
}
