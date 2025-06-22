#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char word[] = "_putchar";
	int i = 0;

	while (i <= 7)
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
