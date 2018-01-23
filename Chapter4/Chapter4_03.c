#include <stdio.h>

void main(void) {

	float value;
	printf("Enter a float number: ");
	scanf("%f", &value);
	printf("The input is %3.1f or %2.1e.\n", value, value);
	printf("The input is %+5.3f or %4.3E.\n", value, value);

}
