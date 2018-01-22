#include <stdio.h>

void main(void)
{
	float cup;
	//double pintuo, angsi, bigcup, teacup;
	float pint, ounce, spoon, teaspoon;
	printf("Enter the number of cup:");
	scanf("%f", &cup);
	pint = cup / 2;
	ounce = cup * 8;
	spoon = ounce / 2;
	teaspoon = spoon / 3;
	printf("%fcup of water is %fpint of water\n", cup, pint);
	printf("%fcup of water is %founce of water\n", cup, ounce);
	printf("%fcup of water is %fspoon of water\n", cup, spoon);
	printf("%fcup of water is %fteaspoone of water\n", cup, teaspoon);
}
