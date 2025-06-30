#include "main.h"

int
_strlen(char *s)
{
	int largo = 0;

	while (s[largo] != '\0')
		largo++;
	return (largo);
}
