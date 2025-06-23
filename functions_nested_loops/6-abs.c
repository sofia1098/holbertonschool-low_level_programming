#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to evaluate
 *
 * Return: always a positive number.
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
