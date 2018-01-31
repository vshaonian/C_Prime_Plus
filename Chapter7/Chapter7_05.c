#include <stdio.h>
#define STOP '#'

void main(void)
{

    char c;
    int sum = 0;

    c = getchar();

    while(c != STOP)
    {

        switch(c)
        {
        case '\n':
            putchar('\n');
            c = getchar();
            break;

        case '.':
            putchar('!');
            sum++;
            c = getchar();
            break;

        case '!':
            putchar('!');
            putchar('!');
            sum++;
            c = getchar();
            break;

        default:
            putchar(c);
            c = getchar();
        }
    }

    printf("There are total %d times replace.\n", sum);
}

