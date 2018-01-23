#include <stdio.h>

void main(void)
{
    char  center;
    printf("Enter a char: ");
    scanf("%c", &center);
    int first = (int)center;

    for(int row = 65; row < first + 1; row++)
    {
        for(int i = first; i > row; i--)
        {
            printf(" ");
        }

        for(int j = 65; j < row + 1; j++)
        {
            printf("%c", j);
        }

        for(int k = row; k > 65; k--)
        {
            printf("%c", k - 1);
        }

        printf("\n");
    }

}
