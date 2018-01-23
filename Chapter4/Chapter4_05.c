#include <stdio.h>

void main(void)
{

	float Mbs, MB, second;
	printf("Enter the speed in Mb/s and the size of file in MB\n");
	scanf("%f%f", &Mbs, &MB);
	second = MB * 8 / Mbs;
	printf("At %.2f megabits per second, "
		"a file of %.2f megabytes.\n", Mbs, MB);

	printf("downlaods in %.2f seconds\n", second);
}
