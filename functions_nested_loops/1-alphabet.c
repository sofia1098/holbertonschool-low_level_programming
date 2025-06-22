#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line.
 *
 * Description: This function uses a loop to print all the lowercase letters
 * from a to z, then prints a newline character.
 * Return: void
 */
void print_alphabet(void)
{
	char letra = 'a';

	while (letra <= 'z')
	{
		_putchar(letra);
		letra++;
	}
	_putchar('\n');
}
