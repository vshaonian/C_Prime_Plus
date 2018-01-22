#include <stdio.h>

void main(void)
{
	const double spyear = 3.156e7;
	int age;
	printf("Enter you age: ");
	scanf("%d", &age);
	printf("%e", age*spyear);
}
