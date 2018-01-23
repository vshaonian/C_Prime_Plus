#include <stdio.h>

void main(void)
{

    double first[8], second[8];
    printf("Enter eight number, please: ");

    for(int i = 0; i < 8; i++)
    {
        scanf("%lf", &first[i]);
        printf("%-8.2f",first[i]);
    }

    printf("\n");
    double sum = 0;

    for(int j = 0; j < 8; j++)
    {
        sum += first[j];
        second[j] = sum;
        printf("%-8.2f",second[j]);
    }

}
