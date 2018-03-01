#include <stdio.h>

void get_str(char *str, int n);
void print_menu(void);

int main(void) {

	char strings[10][50];
	


	return 0;

}

void get_str(char *str, int n) {

}

void print_menu(void)
{
	for (int i = 0; i < 80; i++) {
		printf("*");
	}
	printf("\n");

	puts("Choose an option:");
	puts("(o) Print strings in original order.");
	puts("(a) Print strings in ASCII collating sequence.");
	puts("(l) Print strings ordered by length.");
	puts("(f) Print strings ordered by length of the first word.");
	puts("(q) Quit.");
	puts("");
	puts("Enter a character: ");

	for (int i = 0; i < 80; i++) {
		printf("*");
	}
	printf("\n");
}