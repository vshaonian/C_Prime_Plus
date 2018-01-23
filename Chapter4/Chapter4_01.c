#include <stdio.h>

char fname[10];
char lname[10];
void main(void) {

	printf("Enter your first name: ");
	scanf("%s", fname);
	printf("Enter your last name: ");
	scanf("%s", lname);

	printf("your name is %s,%s.\n", fname, lname);

	return 0;
}
