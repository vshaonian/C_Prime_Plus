#include <stdio.h>

void main(void)
{

    double cl = 1000000;
    int i = 0;

    do
    {
        cl = cl * 1.08;
        cl -= 100000;
        i++;
    }while(cl > 0);

    printf("When %d years later, cl's money is zero\n", i);
}
