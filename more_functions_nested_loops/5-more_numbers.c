#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 *  Return: void
 */

void more_numbers(void)
{
	/*"01234567891011121314\0"*/
	char *p = "01234567891011121314";

	int i;

	int x;

	for (x = 0; x < 11; x++)
	{
		for (i = 0; p[i] != '\0'; i++)
		{
			_putchar(p[i]);
		}
	_putchar('\n');
	}
}
