#include <stdio.h>

void main(void)
{

    int guess = 50;
    int low = 0;
    int height = 100;
    int ch;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("is.\nRespond with a y if my guess is right and with");
    printf("\na b if it is bigger than your number and with ");
    printf("a s if it is small than your number.\n");
    printf("Uh...is your number %d?\n", guess);

    while((ch = getchar()) != 'y')
    {
        while(getchar() != '\n')
        {
            continue;
        }

        if(ch == 's')
        {
            low = guess;
        }
        else
            if(ch == 'b')
            {
                height = guess;

            }

            else
            {
                printf("Sorry, I understand only y , s or b\n");
                continue;
            }

        guess = (low + height) / 2;

        printf("Well, then, is it %d?\n", guess);

    }

    printf("I knew I could do it!\n");

}

