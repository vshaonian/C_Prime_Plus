#include <stdio.h>

#define SIXTY 60

void main(void)
{
	int minutes = 320;
	int hour = minutes / SIXTY;
	int minu = 320 % SIXTY;
	printf("%d minutes is %d hours and %d minute\n", minutes, hour, minu);
	int num;
	do {
		printf("Enter a number which is < 0\n");
		scanf("%d", &num);
	} while (num > 0);

}
