//未作输入验证
#include <stdio.h>
#include <ctype.h>

#define add 40
#define first 300
#define second 450

void main(void)
{
    float base;
    int star = 80;
    int choose;
    char ch;

    for(int i = 0; i < star; i++)
    {
        printf("*");
    }

    printf("\n\n");

    printf("Enter the number corresponding to the desired pay rate or action: \n");
    printf("1) $8.75/hr                          2) $9.33/hr\n");
    printf("3) $10.00/hr                         4) $11.20/hr\n");
    printf("5) quit\n");

    for(int i = 0; i < star; i++)
    {
        printf("*");
    }

    printf("\n");

    do
    {
        printf("Enter the number corresponding to the desired pay rate or action: \n");

        while(scanf("%d", &choose) != 1)
        {
            printf("ERROR INPUT!\n");

            while((ch = getchar()) != '\n')
            {
                continue;
            }
        }

        if(choose < 1 || choose > 5)
        {
            printf("ERROR input!\n");
            continue;
        }

        switch(choose)
        {
        case 1:
            base = 8.75;
            break;

        case 2:
            base = 9.33;
            break;

        case 3:
            base = 10.00;
            break;

        case 4:
            base = 11.20;
            break;

        default:
            base = 0;
        }

        if(base == 0)
        {
            break;
        }

        float time, tax, totalincome, netincome;
        printf("Enter your work time: ");

        while(scanf("%f", &time) != 1)
        {
            printf("ERROR INPUT!\n");

            while((ch = getchar()) != '\n')
            {
                continue;
            }
        }

        time = (time <= 40) ? time : time + (time - 40) * 1.5;
        totalincome = time * base;
        printf("Your totalincome is %.2f.\n", totalincome);

        if(totalincome < first)
        {
            tax = 0;
        }
        else
            if(totalincome > first && totalincome < second)
            {
                tax = first * 0.15 + (totalincome - first) * 0.2;
            }
            else
            {
                tax = first * 0.15 + (second - first) * 0.2 + (totalincome - second) * 0.25;
            }

        netincome = totalincome - tax;
        printf("Your tax is %.2f, your netincome is %.2f.\n",
               tax, netincome);
    }
    while(base != 0);
}

