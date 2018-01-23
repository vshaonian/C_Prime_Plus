#include <stdio.h>

void main(void)
{

    double i = 1.0;
    double j = 1.0;
    long k;
    int mi = -1;
    printf("Enter a number as the times of running: ");
    scanf("%ld", &k);

    while(k > 0)
    {
        i = 1.0;
        j = 1.0;
        mi = -1;
        for(int time = 2; time < k + 1; time++)
        {
            mi *= -1;
            i = i + (1.0 / time);
            j = j + mi * -1 * (1.0 / time);
        }

        printf("The first result is %.5f, the second result is %.5f\n", i, j);
        printf("Enter a number as the times of running: ");
        scanf("%ld", &k);
    }


}
