#include <stdio.h>

void main(void)
{

    int lower, upper;
    printf("Enter lower and upper integer limits: ");
    scanf("%d %d", &lower, &upper);

    while(lower < upper)
    {
        int sum = 0;

        for(int i = lower; i < upper + 1; i++)
        {
            sum += i * i;
        }

        printf("The sums of the squares from %d to %d is %d\n", lower * lower, upper * upper, sum);
        printf("Enter lower and upper integer limits: ");
        scanf("%d %d", &lower, &upper);
    }

    printf("Done\n");
}
