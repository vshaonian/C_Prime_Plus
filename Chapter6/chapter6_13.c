#include <stdio.h>

void main(void)
{

    int arr[8];
    int x = 2;
    int j = 7;

    for(int i = 0; i < 8; i++)
    {
        arr[i] = x;
        x *= 2;
    }

    do
    {
        printf("%5d", arr[j]);
    }
    while(--j >= 0);
}
