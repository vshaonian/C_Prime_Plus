#include <stdio.h>

#define GAL 3.785
#define MILE 1.609

void main(void)
{
	float mileage, gasoline;
	printf("Enter the mileage and the gasoline: \n");
	scanf("%f %f", &mileage, &gasoline);
	printf("the mile per gal is %.1f\n", mileage / gasoline);
	printf("the 100kilometers per L is %f\n", gasoline * GAL / (mileage * MILE * 100));

}
