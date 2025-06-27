#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size of tringle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size - a; b++)
				_putchar(' ');
			for (c = 1; c <= a; c++)
				_putchar('#');
			if (c != size)
				_putchar('\n');
		}

	}
	_putchar('\n');
}
