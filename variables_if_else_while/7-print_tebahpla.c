#include <stdio.h>

/**
 * main - Abecedario con putchar
 * Return: return 0
 */

int main(void)
{
	char letra = 'z';


		for (letra = 'z'; letra >= 'a'; letra--)
		{
			putchar(letra);
		}
	putchar('\n');
	return (0);
}
