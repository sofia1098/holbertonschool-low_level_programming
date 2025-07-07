#include "main.h"

char
*leet(char *s)
{
	int i = 0, j;

	char a[] = "aAeEoOtTlL";

	char leet[] = "4433007711";

	while (s[i] != '\0') /*recorre string*/
	{
		j = 0;
		while (a[j] != '\0') /*recorre a*/
		{
			if (s[i] == a[j]) /*si s match a*/
			{
				s[i] = leet[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
