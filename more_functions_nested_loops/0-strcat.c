#include "main.h"

char
*_strcat(char *dest, char *src)
{
	int i, j;

	char *ptr = dest;

	for (i = 0; dest[i] != '\0'; i++) /*ponde el indice en el final del string destino*/
		;
	for (j = 0; src[j] != '\0'; j++) /*copia desde el final */
	{
		dest[i] = src[j];
		i++;
	}
	dest[j] = '\0';
	return (ptr);
}
