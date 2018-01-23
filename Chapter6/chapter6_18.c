#include <stdio.h>

void main(void)
{

    const Dunbar = 150;
    int friend = 5;
    int week = 0;

    do
    {
        week++;
        friend -= week;
        friend *= 2;
    }
    while(friend <= Dunbar);

    printf("When %d weeks later, Rabnud's friends is more than the Dunbar's number.\n", week);
}
