#include "main.h"

/**
 * isdigit - checks for a digit (0 through 9)
 * @c: The char to check
 *
 * Return: If is a digit return 1, otherwise 0.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
