#include <stdio.h>
#include <string.h>


char name[20];

void main(void)
{

	printf("Enter your name: ");
	scanf("%s", name);

	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	printf("\"%*s\"\n", sizeof(name), name);

}
