#include <stdio.h>

void main(void) {
	const double cm = 2.54;
	int inch;
	printf("Enter your heigh: ");
	scanf("%d", &inch);
	printf("your heigh is %f in cm", inch*cm);
}
