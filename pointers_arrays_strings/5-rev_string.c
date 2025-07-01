#include "main.h"

void
rev_string(char *s)
{
	int i, j;

	char k;

	for (i = 0; s[i] != '\0'; i++)
		;
	i--;
	for (j = 0; j < i; j++, i--)
	{
		k = s[j];
		s[j] = s[i];
		s[i] = k;
	}
}
