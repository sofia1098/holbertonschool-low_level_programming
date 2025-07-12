#include "main.h"

int _sqrt_recursion(int n)
{
	int x;

	if (n < 0)
		return (-1);
	else
		n = x * x; 
		return (n /  _sqrt_recursion(x - 1));

}
