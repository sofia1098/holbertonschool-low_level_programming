#include "main.h"
#include <stdlib.h>

int
*array_range(int min, int max)
{
	int *p;

	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(size * sizeof(int));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
		p[i] = min + i;

	return (p);
}
