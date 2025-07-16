#include "main.h"
#include <stdlib.h>

char
*str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *array;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j] != '\0' ; j++)
		;

	array = malloc((i + j + 1) * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		array[k] = s1[k];

	for (k = 0; k < j; k++)
		array[i + k] = s2[k];

	array[i + j] = '\0';
	return (array);

}
