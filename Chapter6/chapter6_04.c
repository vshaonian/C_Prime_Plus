#include <stdio.h>

void main(void)
{
    int sum = 0;

    for(int i = 0; i < 6; i++)
    {

        for(int j = 0; j < i + 1; j++)
        {
            printf("%c", sum + 65);
            //
            sum++;

        }

        printf("\n");
    }
}
