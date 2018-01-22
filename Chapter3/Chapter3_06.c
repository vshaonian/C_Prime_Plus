#include <stdio.h>

void main(void)
{
	const double pm = 3.0e-23;
	const int pkout = 950;
	int kout;
	printf("Enter the number of kout: ");
	scanf("%d", &kout);
	printf("%d kout water consist of %emucloe", kout*pkout, kout*pkout / pm);
}
