#include <stdio.h>

void main(void)
{

    int up, down;
    printf("Enter a up number and a down number: ");
    scanf("%d %d", &up, &down);

    for(int i = down; i < up + 1; i++)
    {
        printf("%5d%5d%5d\n", i, i * i, i * i * i);
    }

}
