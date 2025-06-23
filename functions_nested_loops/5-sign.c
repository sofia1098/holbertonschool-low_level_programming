#include "main.h"

/**
 * print_sign -  Prints the sign of a number.
 *
 * @n: the int to check.
 * Return: one if n is +. Returns zero if is zero. Returns -one if is-.
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		return (0);
		_putchar('0');
	}
}
