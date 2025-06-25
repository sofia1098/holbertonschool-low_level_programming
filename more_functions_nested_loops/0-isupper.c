#include "main.h"

/**
 * _issupper -  checks for uppercase character.
 * @c: char to check.
 *
 * Return: 1 if its true or 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else 
		return (0);
}
