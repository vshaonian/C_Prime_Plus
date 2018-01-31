#include <stdio.h>
#define base 10.00
#define add 40
#define first 300
#define second 450

void main(void)
{
    int time, totalincome;
    float tax, netincome;
    printf("Enter your work time: ");
    scanf("%d", &time);
    time = (time <= 40) ? time : time + (time - 40) * 1.5;
    totalincome = time * 10;
    printf("Your totalincome is %d.\n", totalincome);

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
