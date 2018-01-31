#include <stdio.h>
#define STOP '#'

void main(void)
{

    char c;
    int sum = 0;

    c = getchar();

    while(c != STOP)
    {
        if(c == '\n')
        {
            putchar('\n');
            c = getchar();
            continue;
        }

        if(c == '.')
        {
            putchar('!');
            sum++;
            c = getchar();
        }
        else
            if(c == '!')
            {
                putchar('!');
                putchar('!');
                sum++;
                c = getchar();
            }
            else
            {
                putchar(c);
                c = getchar();
            }
    }

    printf("There are total %d times replace.", sum);
}
