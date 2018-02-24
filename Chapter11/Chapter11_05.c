#include <stdio.h>

char * find_str(const char *str1, char ch);

int main(void) {
	char arr[80];
	char *str;
	char ch;

	printf("Enter a string to find: \n");
	fgets(arr, 80, stdin);
	while (arr[0] != '\n')
	{
		printf("Enter a ch to find: \n");
		ch = getchar();
		if (ch != '\n') {
			while (getchar() != '\n')
			{
				continue;
			}
		}

		str = find_str(arr, ch);

		if (str == NULL) {
			printf("ch %c is not in %s", ch, arr);
		}
		else
		{
			printf("ch %c is at %d index.", ch, str - arr +1);
		}

		printf("Enter a string to find (empty to quit): \n");
		fgets(arr, 80, stdin);
	}
}

char * find_str(const char *str1, char ch) {
	char *local = str1;
	while (*local != '\0') {
		if (*local == ch) {
			return local;
		}
		local++;
	}
	return NULL;
}