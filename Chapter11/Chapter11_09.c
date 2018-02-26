#include <stdio.h>

void reverse(char *str);
void get_str(char *str, int n);

int main(void) {

	char str[20] = "";

	printf("Enter a string to reverse: \n");
	get_str(str, 20);

	while (str[0]!='\0')
	{
		printf("The original string is %s.\n", str);
		reverse(str);
		printf("Now, the string is %s.\n", str);

		printf("Enter a string to reverse: \n");
		get_str(str, 20);

	}


	return 0;
}

void reverse(char *str) {
	char *p = str;
	char *q = str;
	while (*p!='\0')
	{
		p++;
		//continue;
	}
	p--;
	while (p-q>=0)
	{
		char temp = *p;
		*p = *q;
		*q = temp;
		q++;
		p--;
	}
}

void get_str(char *str, int n) {
	fgets(str, n, stdin);
	while (*str != '\0')
	{
		if (*str == '\n') {
			*str = '\0';
			break;
		}
		str++;
	}
}