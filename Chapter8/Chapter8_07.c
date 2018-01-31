#include <stdio.h>
#include <ctype.h>


#define add 40
#define first 300
#define second 450

char get_first(void);

void main(void)
{
    float base;
    int star = 80;
    char choose;

    for(int i = 0; i < star; i++)
    {
        printf("*");
    }

    printf("\n\n");

    printf("Enter the number corresponding to the desired pay rate or action: \n");
    printf("a) $8.75/hr                          b) $9.33/hr\n");
    printf("c) $10.00/hr                         d) $11.20/hr\n");
    printf("q) quit\n");

    for(int i = 0; i < star; i++)
    {
        printf("*");
    }

    printf("\n");

    do
    {
        printf("Enter the number corresponding to the desired pay rate or action: \n");
        //scanf("%d", &choose);
        choose = get_first();

        switch(choose)
        {
        case 'a':
            base = 8.75;
            break;

        case 'b':
            base = 9.33;
            break;

        case 'c':
            base = 10.00;
            break;

        case 'd':
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
        scanf("%f", &time);
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

char get_first(void)
{
	int ch;

	while (isspace(ch = getchar()))
	{
		continue;
	}

	while (getchar() != '\n')
	{
		continue;
	}

	return ch;
}
