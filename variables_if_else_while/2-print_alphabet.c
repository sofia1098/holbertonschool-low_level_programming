#include <stdio.h>

/**
 * main - Abecedario con putchar
 * Return: return 0
 */

int main(void)
{
	char letra = 'a';

	int i = 0;

	for (i = 0; i < 26; i++)
		putchar(letra + i);

	putchar('\n');
	return (0);
}
