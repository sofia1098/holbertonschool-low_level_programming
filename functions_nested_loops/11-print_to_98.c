#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -  Prints all numbers from n to 98.
 * @n: Start number.
 *
 * Return: void.
 */

void print_to_98(int n)
{

	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
}
