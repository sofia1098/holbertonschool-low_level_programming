#include "main.h"
#include <stdlib.h>

void
*_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(sizeof(int) * (size * nmemb));

	if (p == NULL)
		return (NULL);

	while ((size * nmemb) > i)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
