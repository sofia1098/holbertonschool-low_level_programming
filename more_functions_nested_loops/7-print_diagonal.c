#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: Number of times that print
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
		_putchar('\\');
		if (i != n - 1)
			_putchar('\n');
		}
	}
	_putchar('\n');
}
