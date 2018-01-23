#include <stdio.h>

void main(void)
{

    int count = 70;

    for(int j = 0; j < 6; j++)
    {
        for(int i = 0; i<j+1; i++)
        {
            printf("%c", count - i);
        }

        printf("\n");
    }
}
