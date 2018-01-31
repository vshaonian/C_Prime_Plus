#include <stdio.h>

void main(void)
{
    int choose, base, income;
    float tax;
    int star = 80;

    for(int i = 0; i < star; i++)
    {
        printf("*");
    }

    printf("\n\n");

    printf("Enter the number corresponding to the desired pay rate or action: \n");
    printf("1) single                          2) householde\n");
    printf("3) married                         4) divorced\n");
    printf("5) quit\n");

    for(int i = 0; i < star; i++)
    {
        printf("*");
    }

    printf("\n");

    do
    {
        printf("Enter the number corresponding to the desired pay rate or action: \n");
        scanf("%d", &choose);

        switch(choose)
        {
        case 1:
            base = 17850;
            break;

        case 2:
            base = 23900;
            break;

        case 3:
            base = 29750;
            break;

        case 4:
            base = 14875;
            break;

        default:
            base = 0;
        }

        if(base == 0)
        {
            break;
        }

        printf("Enter the income: ");
        scanf("%d", &income);
        tax = (income <= base) ? income * 0.15 : base * 0.15 + (income - base) * 0.28;
        printf("The tax is %.2f.\n", tax);
    }
    while(base != 0);
}
