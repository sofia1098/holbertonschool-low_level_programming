#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: Number of times that print
 *
 * Return: void
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		for (; n > 0; n--)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
