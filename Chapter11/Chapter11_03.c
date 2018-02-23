#include <stdio.h>
void get_word(char *word);

int main(void) {
	char word[20] = " ";
	get_word(word);
	puts(word);
	return 0;
}

void get_word(char *word) {
	int ct = 0;
	char ch;
	while ((ch = getchar()) == ' ')
	{
		continue;
	}
	word[ct] = ch;
	while ((ch = getchar()) != EOF)
	{
		if (ch == ' ' || ch == '\n' || ch == '\t') {
			break;
		}
		ct++;
		word[ct] = ch;
	}
}