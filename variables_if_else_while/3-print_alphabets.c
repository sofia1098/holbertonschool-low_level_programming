#include <stdio.h>

/**
 * main - checkea si un numero es positivo, negativo o 0
 * Return: return 0
 */

int main(void)
{
	char letra = 'a';

	int i = 0;

	char may = 'A';

	for (i = 0; i < 26; i++)
		putchar(letra + i);

	for (i = 0; i < 26; i++)
		putchar(may + i);
	putchar('\n');
	return (0);
}
