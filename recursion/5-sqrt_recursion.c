#include "main.h"

int _raiz(int n)
{
	int x,
	
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	if (x * x == n)
		return (x);
	else 
		x++;

}	
int _sqrt_recursion(int n)
{
	return (_raiz(n - 1));
}
