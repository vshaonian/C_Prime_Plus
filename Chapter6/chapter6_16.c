#include <stdio.h>

void main(void)
{

    double Daphne = 100;
    double Deirdre = 100;
    Daphne = Daphne + 100 * 0.1;
    Deirdre *= 1.05;
    int i = 1;

    while(Deirdre <= Daphne)
    {
        Daphne = Daphne + 100 * 0.1;
        Deirdre *= 1.05;
        i++;
    }

    printf("When %d years later,Daphne's money is %lf, and Deirdre's money is %lf.\n",
		i, Daphne, Deirdre);

}
