#include <stdio.h>

char * mystrncpy(char *s1, char*s2, int n);

int main(void) {
	char str1[50]="";
	char str2[50]="";
	int n;

	printf("Enter a string to copy: \n");
	fgets(str2, 50, stdin);
	while (str2[0]!='\n')
	{
		printf("How many chars do you want to copy? \n");
		scanf_s("%d", &n);
		while (getchar()!= '\n')
		{
			continue;
		}
		printf("The original string is: %s", str2);
		mystrncpy(str1, str2, n);
		printf("Now str1 is: %s\n", str1);

		printf("Enter a string to copy: \n");
		fgets(str2, 50, stdin);
	}
	return 0;
}

char * mystrncpy(char *s1, char *s2, int n) {
	int i = 0;
	while (s2!='\0' && i<n)
	{
		*(s1 + i) = *(s2 + i);
		i++;
	}
	while (i < n) {
		*(s1 + i) = '\0';
		i++;
	}

	return s1;
}