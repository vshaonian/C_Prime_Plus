#include <stdio.h>
#include <stdbool.h>

#define artichoke 2.05
#define beet 1.15
#define carrot 1.09
#define min_discount 100
#define discount_rate 0.05


void abandon(void);


void main(void)
{
    int choose;
    int star = 80;
    float price, weight, total_cost;
    bool isQuit = false;
    float a_weight = 0;
    float b_weight = 0;
    float c_weight = 0;
    float vegatable_cost = 0;
    float total_order_cost = 0;
    float total_weight = 0;
    float discount = 0;
    float freight = 0;

    for(int i = 0; i < star; i++)
    {
        printf("*");
    }

    printf("\n\n");


    printf("Enter the char corresponding to the order or action: \n");
    printf("a) artichoke                        b) beet\n");
    printf("c) carrot                           q) quit\n");

    for(int i = 0; i < star; i++)
    {
        printf("*");
    }

    printf("\n");

    printf("Enter the char corresponding to the order or action: \n");
    //scanf("%c", &choose);
    choose = getchar();
    abandon();

    while(!isQuit)
    {
        //printf("Your choose is %c\n", choose);
        isQuit = false;

        switch(choose)
        {
        case 'a':
            price = artichoke;
            printf("You are ordering artichoke, it's price is %.2f\n", artichoke);
            break;

        case 'b':
            price = beet;
            printf("You are ordering beet, it's price is %.2f\n", beet);
            break;

        case 'c':
            price = carrot;
            printf("You are ordering carrot, it's price is %.2f\n", carrot);
            break;

        default:
            printf("Bill, please!\n");
            isQuit = true;
            break;
        } //switch

        if(isQuit == true)
        {
            // printf("The isQuit is true\n");
            break;
        }
        else
        {
            //printf("The isQuit is still false\n");
        }

        //printf("The price of your order is %f.\n", price);
        printf("Enter the weight for order: \n");

        //abandon();

        scanf("%f", &weight);
        total_weight += weight;
        vegatable_cost += weight * price;
        abandon();
        //printf("The weight you order is %f.\n", weight);

        switch(choose)
        {
        case 'a':
            a_weight += weight;
            break;

        case 'b':
            b_weight += weight;
            break;

        case 'c':
            c_weight += weight;
            break;

        default:
            printf("Your program is ERROR!\n");
        }

        if(a_weight)
        {
            printf("you order %.2f artichoke.\n", a_weight);
        }

        if(b_weight)
        {
            printf("you order %.2f beet\n", b_weight);
        }

        if(c_weight)
        {
            printf("you order %.2f carrot\n", c_weight);
        }

        printf("Enter the char corresponding to the order or action: \n");
        choose = getchar();

        abandon();
    } //while

    if(vegatable_cost >= min_discount)
    {
        discount = vegatable_cost * discount_rate;
        total_order_cost = vegatable_cost - discount;
    }

    if(weight <= 5)
    {
        freight = 6.5;
    }
    else
        if(weight <= 20)
        {
            freight = 14;
        }
        else
        {
            freight = 14 + (weight - 20) * 0.5;
        }

    total_cost = total_order_cost + freight;

    for(int i = 0; i < star; i++)
    {
        printf("*");
    }

    printf("\n");
    printf("            This is your bill: \n\n");

    if(a_weight)
    {
        printf("artichoke:         %.2f pounds, %.2f dollers per pound\n", a_weight, artichoke);
    }

    if(b_weight)
    {
        printf("beet:              %.2f pounds, %.2f dollers per pound\n", b_weight, beet);
    }

    if(c_weight)
    {
        printf("carrot:            %.2f pounds, %.2f dollers per pound\n", c_weight, carrot);
    }

    printf("Total weight:      %.2f\n", weight);
    printf("vegatable cost:    $%.2f\n", vegatable_cost);
    printf("order cost:        $%.2f\n", total_order_cost);

    if(discount)
    {
        printf("discount:          $%.2f\n", discount);
    }

    printf("freight cost:      $%.2f\n", freight);
    printf("Total cost:        $%.2f\n\n", total_cost);

    printf("           Have a good day!\n\n");

    for(int i = 0; i < star; i++)
    {
        printf("*");
    }
	printf("\n");
}

void abandon(void)
{
    while(getchar() != '\n')
    {
        continue;
    }
}
