#include <stdio.h>
#define STOP '#'

void main(void)
{
    char ch;
    int num = 0;

    ch = getchar();

    while(ch != STOP)
    {
        if(ch == '\n')
        {
            putchar('\n');
            ch = getchar();
            continue;
        }

        num++;

        if(num % 8 == 0)
        {

            printf("%c-%d\n", ch, ch);
        }
        else
        {
            printf("%c-%d  ", ch, ch);
        }

        ch = getchar();

    }
}
