#include <stdio.h>

void chline(char ch, int i, int j);

void main(void)
{
    char ch;
    int i, j;
    printf("Enter ch for print: \n");
    scanf("%c", &ch);
    printf("Enteer two numbers for print: \n");
    scanf("%d%d", &i, &j);
    chline(ch, i, j);
}

void chline(char ch, int i, int j)
{
    for(int a = 0; a < i; a++)
    {
        for(int b = 0; b < j; b++)
        {
            printf("%c", ch);
        }

        printf("\n");
    }

}

