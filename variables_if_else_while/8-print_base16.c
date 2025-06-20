#include <stdio.h>

/**
 * main - checkea si un numero es positivo, negativo o 0
 * Return: return 0
 */

int main(void)
{
	char num[] = "0123456789abcdef";

	int i = 0;

	for (i = 0; i < 16; i++)
		putchar(num[i]);

	putchar('\n');
	return (0);
}
