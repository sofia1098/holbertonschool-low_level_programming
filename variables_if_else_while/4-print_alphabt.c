#include <stdio.h>

/**
 * main - Abecedario con putchar
 * Return: return 0
 */

int main(void)
{
	char letra = 'a';


		for (letra = 'a'; letra <= 'z'; letra++)
		{
			if (letra != 'q' && letra != 'e')
			putchar(letra);
		}
	putchar('\n');
	return (0);
}
