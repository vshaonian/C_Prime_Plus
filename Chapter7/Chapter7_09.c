#include <stdio.h>
#include <stdbool.h>

void main(void)
{
    int num;
    printf("Enter an integar number: ");
    scanf("%d", &num);

    for(int i = 2; i <= num; i++)
    {
        bool isPrime = true;

        for(int div = 2; (div * div) <= num; div++)
        {
            if(i % div == 0)
            {
                isPrime = false;
                break;
            }
        }

        if(isPrime)
        {
            printf("%5d",i);
        }

    }
	printf("\n");
}
