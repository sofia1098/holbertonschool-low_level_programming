#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: size of the square.
 *
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++) /*filas*/
		{
			for (j = 1; j <= size; j++) /*columnas*/
				_putchar('#');
			if (i != size)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
