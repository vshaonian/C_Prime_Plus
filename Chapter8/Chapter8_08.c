#include <stdio.h>

float get_num(void);
char get_first(void);


void main(void)
{
    char choice;
    float first_num, second_num;

    printf("Enter the operation of your choice: \n");
    printf("a. add               s. subtract\n");
    printf("m. multiply          d. divide\n");
    printf("q. quit\n");

    choice = get_first();

    while(choice != 'q')
    {
        printf("Enter first number: \n");
        first_num = get_num();
        printf("Enter second number: \n");
        second_num = get_num();

        if(choice == 'a')
        {
            printf("%.2f + %.2f = %.2f\n", first_num, second_num, first_num + second_num);
        }
        else
            if(choice == 's')
            {
                printf("%.2f - %.2f = %.2f\n", first_num, second_num, first_num - second_num);
            }
            else
                if(choice == 'm')
                {
                    printf("%.2f * %.2f = %.2f\n", first_num, second_num, first_num * second_num);
                }
                else
                    if(choice == 'd')
                    {
                        while(second_num == 0)
                        {
                            printf("ERROR INPUT!\n");
                            second_num = get_num();
                        }

                        printf("%.2f / %.2f = %.2f\n", first_num, second_num, first_num / second_num);
                    }
                    else
                    {
                        printf("ERROR INPUT!\n");
                    }

        printf("Enter the operation of your choice: \n");
        choice = get_first();
    }

    printf("Bye.\n");
}

float get_num(void)
{
    float input;
    char ch;

    while(scanf("%f", &input) != 1)
    {
        while((ch = getchar()) != '\n')
        {
            putchar(ch);
        }

        printf(" is not a number.\n");
    }

    return input;
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