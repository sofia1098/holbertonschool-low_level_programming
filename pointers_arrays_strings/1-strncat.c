#include "main.h"

char
*_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++) /* ponde el indice en el */
					  /* final del string destino */
		;
	for (j = 0; j < n && src[j] != '\0'; j++) /*copia desde el final */
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
