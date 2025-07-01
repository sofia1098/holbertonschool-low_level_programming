#include "main.h"

void
puts_half(char *str)
{
	int i, mitad;

	for (i = 0; str[i] != '\0'; i++)
		;
	for (mitad = (i / 2); str[mitad] != '\0' ; mitad++)
		_putchar(str[mitad]);
	_putchar('\n');
}
