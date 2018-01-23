#include <stdio.h>

void jolly(void);
void deny(void);


void main(void)
{
	jolly();
	jolly();
	jolly();
	deny();
}


void jolly(void)
{
	printf("For he's a jolly felow!\n");
}

void deny(void)
{
	printf("Which nobody can deny!\n");
}

