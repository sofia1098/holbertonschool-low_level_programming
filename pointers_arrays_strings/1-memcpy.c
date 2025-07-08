#include "main.h"

char
*_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	char *s = dest;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (s);
}
