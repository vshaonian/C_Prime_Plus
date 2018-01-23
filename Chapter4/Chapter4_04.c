#include <stdio.h>

void main(void)
{
	float cm;
	//float m;
	char name[20];
	printf("Enter your name & height in cm: ");
	scanf("%s%f", name, &cm);
	//m = cm / 100;
	printf("%s, you are %4.3f m tall.\n", name, cm / 100);

}
