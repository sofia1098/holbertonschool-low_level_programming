#include "main.h"

void
puts_half(char *str)
{
	int i, mitad;

	for (i = 0; str[i] != '\0'; i++)
		;
	if ((i % 2) == 0)
		for (mitad = (i / 2); str[mitad] != '\0' ; mitad++)
			_putchar(str[mitad]);
	else
		for (mitad = ((i + 1) / 2); str[mitad] != '\0' ; mitad++)
		_putchar(str[mitad]);
	_putchar('\n');
}
