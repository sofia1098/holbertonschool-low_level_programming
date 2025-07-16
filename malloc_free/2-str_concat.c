#include "main.h"
#include <stdlib.h>

char
*str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *array;

	if (s1 != NULL)
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 != NULL)
	{
		for (j = 0; s2[j] != '\0' ; j++)
			;
	}
	array = malloc((i + j + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (k = 0; k <= (i + j); k++)
	{
		if (k <= i)
			array[k] = s1[k];
		else
			array[k] = s2[k];
	}
	array[i + j] = '\0';
	return (array);

}
