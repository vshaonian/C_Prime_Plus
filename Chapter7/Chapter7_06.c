#include <stdio.h>
#include <stdbool.h>

#define STOP '#'

void main(void)
{
    bool pre = false;
    char ch = getchar();
    int num = 0;

    while(ch != STOP)
    {

        if(pre && ch == 'i')
        {
            num++;
        }

        pre = (ch == 'e') ? true : false;
        ch = getchar();
    }

    printf("The word ei presant %d times\n", num);

}
