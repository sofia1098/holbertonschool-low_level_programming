#include "main.h"

unsigned int
_strspn(char *s, char *accept)
{
	int i, j, match, contador = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
		}
	if (!match)
		break;
	contador++;
	}
	return (contador);
}
