#include "main.h"

char *cap_string(char *str)
{
	int i, j;

	char a[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0';i++)
	{
		if (str[i] > 'a' && str[i] < 'z' && str[i - 1] == a[])
			str[i] = str[i] - 32;
	}
	return (str);
}
