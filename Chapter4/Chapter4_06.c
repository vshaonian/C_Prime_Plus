#include <stdio.h>
#include <string.h>

void main(void)
{

	char fname[10];
	char lname[10];
	int fnum, lnum;
	printf("Enter your first name and your last name: \n");
	scanf("%s %s", fname, lname);
	fnum = strlen(fname);
	lnum = strlen(lname);
	printf("%s %s\n", fname, lname);
	printf("%*d %*d", fnum, fnum, lnum, lnum);

}
