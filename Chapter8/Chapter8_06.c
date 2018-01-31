#include <stdio.h>
#include <ctype.h>

char get_first(void);

void main(void)
{

    printf("%c\n", get_first());
}

char get_first(void)
{
    int ch;

    while(isspace(ch = getchar()))
    {
        continue;
    }

    while(getchar() != '\n')
    {
        continue;
    }

    return ch;
}


