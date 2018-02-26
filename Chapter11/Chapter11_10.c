#include <stdio.h>
#include <ctype.h>

char get_str(char *str, int n);
void del_space(char *str);

int main(void) {

	char str[20] = "";

	printf("Input a string including space to delete.\n");

	get_str(str, 20);

	while (str[0]!='\0')
	{
		printf("The original string is %s.\n", str);
		del_space(str);
		printf("Now the string is %s.\n", str);

		printf("Input a string including space to delete.\n");
		get_str(str, 20);
	}



	return 0;
}

char get_str(char *str, int n) {
	fgets(str, n, stdin);
	
	while (*str++!='\0')
	{
		if (*str == '\n') {
			*str = '\0';
			break;
		}
	}
}

void del_space(char *str) {
	char *p = str;
	char *q = str;
	while (*p++ != '\0')
	{
		if (isblank(*p)) {
			continue;
		}
		else
		{
			q++;
			*q = *p;
		}
	}
}