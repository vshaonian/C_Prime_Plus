#include <stdio.h>

void main(void)
{
    int count = 0;

    while(getchar() != EOF)
    {
        count++;
    }

    printf("This file has %d char\n", count);

}
