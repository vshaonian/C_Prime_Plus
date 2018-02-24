#include <stdio.h>
void get_word(char *word, int n);

int main(void) {
	char word[20] = " ";
	get_word(word, 20);
	for (int i = 0; i < 20; i++) {
		putchar(word[i]);
	}
	putchar('\n');
	return 0;
}

void get_word(char *word, int n) {
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
		if (ct == n) {
			break;
		}
		word[ct] = ch;
	}
}