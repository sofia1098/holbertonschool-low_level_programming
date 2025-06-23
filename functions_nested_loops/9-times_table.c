#include "main.h"

/**
 * times_table - Prints the nine times table, starting with zero
 */
void times_table(void)
{
	int a, b, num;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			num = a * b;
			if (b == 0)
			{
				_putchar(num + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (num < 10)
				{
					_putchar(' ');
					_putchar(num + '0');
				}
				else
				{
					_putchar((num / 10) + '0');
					_putchar((num % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
