#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void main(void)
{
    int ch;
    int word_num = 0;
    int char_num = 0;
    float average;
    bool inword = false;

    while((ch = getchar()) != EOF)
    {
        if(!inword && isalpha(ch))
        {
            word_num++;
        }

        if(isalpha(ch))
        {
            char_num++;
            inword = true;
        }
        else
        {
            inword = false;
        }

    }

    average = (float)char_num / word_num;
    printf("the word number is %d\n", word_num);
    printf("the char number is %d\n", char_num);
    printf("average char ever word is %.2f\n", average);
}
