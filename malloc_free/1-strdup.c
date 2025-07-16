#include <stdlib.h>
#include "main.h"

char
*_strdup(char *str)
{
	char *array;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	array = malloc(i * sizeof(char));

	for (j = 0; j <= i; j++)
		array[j] = str[j];

	return (array);

}
