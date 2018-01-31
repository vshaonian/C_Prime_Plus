#include <stdio.h>

void main(void)
{
    int oddnum = 0;
    int doublenum = 0;
    int oddsum = 0;
    int doublesum = 0;
    int c;
    printf("Enter an integar number: ");


    while(scanf("%d", &c) == 1 && c != 0)
    {
        if(c % 2 == 0)
        {
            doublenum++;
            doublesum += c;
        }
        else
        {
            oddnum++;
            oddsum += c;
        }
    }

    printf("The odd number is %d, and the double number is %d.",
           oddnum, doublenum);
    printf(" the avrage of odd is %.2f, and the avrage of double is %.2f\n",
           (float)oddsum / oddnum, (float)doublesum / doublenum);

}
