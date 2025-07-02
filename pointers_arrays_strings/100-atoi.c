#include "main.h"

int
_atoi(char *s)
{
	int i, num;

	char signo;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '+' || s[i] == '-')
		{
			signo = s[i];
			_putchar(signo);
		}
		else if (s[i] == 0 || 1 || 2 || 3 || 4 || 5 || 6 || 7 || 8 || 9)
		{
			num = s[i];
			_putchar(num);
		}
		else
			return (0);
	}
	return (0);
}
