#include <stdio.h>

char * string_in(char *str1, char *str2);

void * get_str(char *str, int n);

int main(void) {
	char str1[50] = "";
	char str2[50] = "";
	char *local;

	printf("Enter two string for test: \n");
	get_str(str1, 50);
	get_str(str2, 50);
	while (str1[0] != '\n' && str2[0] != '\n')
	{
		local = string_in(str1, str2);

		if (local) {
			printf("%s is in %s, strat at %d\n", str2, str1, local - str1 + 1);
		}
		else
		{
			printf("%s is not in %s\n", str2, str1);
		}
		printf("Enter two string for test: \n");
		get_str(str1, 50);
		get_str(str2, 50);
	}

	return 0;
}

char * string_in(char *str1, char *str2) {
	char *p, *q;
	p = str1;
	q = str2;
	while (*p!='\0')
	{
		int i = 0;

		if (*p == *q) {
			while (*(q + i) != '\0')
			{
				i++;
				if (*(p + i) == *(q + i)) {
					continue;
				}
				else
				{
					break;
				}
			}
			if (*(q + i) == '\0') {
				return p;
			}
		}
		p++;
	}
	return NULL;
}

void * get_str(char *str, int n) {
	fgets(str, n, stdin);
	while (*str!='\0')
	{
		if (*str == '\n') {
			*str = '\0';
			break;
		}
		str++;
	}
	//return str;
}