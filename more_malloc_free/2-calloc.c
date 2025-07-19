#include "main.h"
#include <stdlib.h>

void
*_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	unsigned int i;

	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);

	ptr = p;
	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}
	return (p);
}
