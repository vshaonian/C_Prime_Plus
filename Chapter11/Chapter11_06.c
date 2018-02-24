#include <stdio.h>

int is_within(const char *str, char ch);

int main(void) {
	char arr[80];
	char ch;
	int result;

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

		result = is_within(arr, ch);
		if (result) {
			printf("the char %c is in the string %s", ch, arr);
		}
		else {
			printf("the char %c is not in the string %s", ch, arr);
		}

		printf("Enter a string to find (empty to quit): \n");
		fgets(arr, 80, stdin);
	}
	return 0;
}

int is_within(const char *str, char ch) {
	while (*str != '\0')
	{
		if (*str == ch)
			return 1;

		str++;
	}

	return 0;
}