#include "main.h"

char
*_strcpy(char *dest, char *src)
{
	int i;

	char copia;

	for (i = 0; src[i] != '\0'; i++)
	{
		copia = src[i];
		dest[i] = copia;
	}
	*dest += '\0';
	return dest;
}
