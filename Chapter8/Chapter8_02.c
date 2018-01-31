#include <stdio.h>
#define ROW 10

void main(void)
{

    int ch;
    int count = 1;

    while((ch = getchar()) != EOF)
    {
        if(ch >= 32)
        {
            putchar(ch);
            printf(" -- %d  ", ch);
        }
        else
        {
            printf("^%c", ch+64);
        }

        if(count % 10 == 0)
        {
            printf("\n");
        }

        count++;
    }
}
