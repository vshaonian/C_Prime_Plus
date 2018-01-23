#include <stdio.h>
#include <string.h>


void main(void)
{

    char word[20];
    printf("Enter a word:");
    scanf("%s", word);
    int len = strlen(word);

    for(int i = len-1; i >= 0; i--)
    {
        printf("%c", word[i]);
    }
}
