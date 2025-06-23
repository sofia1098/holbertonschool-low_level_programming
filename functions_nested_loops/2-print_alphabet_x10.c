#include "main.h"
/**
 *print_alphabet - Prints the alphabet in lowercase followed by a new line.
 *
 *Description: This function uses a loop to print all the lowercase letters
 *from a to z ten times.
 *Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;

	char letra;

	for (i = 0; i < 10; i++)
	{
		letra = 'a';
		while (letra <= 'z')
		{
			_putchar(letra);
			letra++;
		}
		_putchar('\n');
	}
}
