#include "main.h"

char *cap_string(char *str)
{
	int i = 0, j;
	char a[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (str[i] == a[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			 	{		
					str[i + 1] -= 32;
				}
			}
		}
		i++;
	}
	return (str);
}
