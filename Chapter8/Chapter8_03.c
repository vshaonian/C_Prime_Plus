#include <stdio.h>
//#include <ctype.h>

void main(void)
{
    int ch;
    int lower_num = 0;
    int upper_num = 0;

    while((ch = getchar()) != EOF)
    {
        if(ch >= 65 && ch <= 90)
        {
            upper_num++;
        }
        else
            if(ch >= 97 && ch <= 122)
            {
                lower_num++;
            }

    }

    printf("The lower char number are %d, and the upper char number are %d.\n",
           lower_num, upper_num);

}
