#include <stdio.h>
#include <ctype.h>

int locate(char ch);

void main(void)
{
    int ch;
    printf("Enter some chars: \n");

    while((ch = getchar()) != EOF)
    {
        printf("The char locates %d\n", locate((char)ch));
    }
}

int locate(char ch)
{

    char lower_char;

    if(isalpha(ch))
    {
        lower_char = tolower(ch);
        return lower_char - 96;
    }
    else
    {
        return -1;
    }
}
