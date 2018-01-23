#include <stdio.h>

void main(void)
{

	char ssr[26];

	for (int i = 0; i < 26; i++)
	{
		ssr[i] = (char)i + 97;
	}

	for (int j = 0; j < 26; j++)
	{
		printf("%c", ssr[j]);
	}
	printf("\n");
}
