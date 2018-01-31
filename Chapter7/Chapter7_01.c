#include <stdio.h>
#include <ctype.h>

#define STOP '#'

char c;
int space = 0;
int nextline = 0;
int otherc = 0;
void main(void)
{
    while((c = getchar()) != STOP)
    {
        if(isblank(c))
        {
            space++;
        }
        else
            if(c == '\n')
            {
                nextline++;
            }
            else
            {
                otherc++;
            }

    }

    printf("There are %d spaces, %d nextlines, and %d otherchars.\n",
           space, nextline, otherc);
}
