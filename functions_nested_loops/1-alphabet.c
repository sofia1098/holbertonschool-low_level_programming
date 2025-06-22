#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void);
{
	char letra = 'a';

	while ('a' <= 'z')
	{
		_putchar(letra);
		letra++;
	}
	return (0);
}
