#include "main.h"

int
_strcmp(char *s1, char *s2)
{
/**	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (i > j)
		return (i + j);
	if (i < j)
		return (i - j);
	if (i == j) 
		for (i = 0; s1[i] == s2[i]; i++)
			return (0);
	else
		return (i - j);
**/
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
