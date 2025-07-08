#include "main.h"

unsigned int
_strspn(char *s, char *accept)
{
	int i, j, k;

	for (i = 0; s[i] != '\0'; i++) /*recoore string*/
	{
		j = 0;
		while (accept[j] != '\0') /*recorre substring*/
		{
			if (s[i] == accept[j]) /*find match*/
				k++;
			j++;
		}
		i++;
	}
	return (k);
}
