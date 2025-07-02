#include "main.h"

/**
 * _strcpy -  copies the string pointed to by src
 * @dest: destino.
 * @src: origen.
 *
 * Return: *dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	char copia;

	for (i = 0; src[i] != '\0'; i++)
	{
		copia = src[i];
		dest[i] = copia;
	}
	dest[i] = '\0';
	return (dest);
}
