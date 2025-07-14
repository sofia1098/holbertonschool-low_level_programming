#include "main.h"

int _sqrt_recursion(int n)
{
	int aprox_raiz;
	
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	aprox_raiz = (n / _sqrt_recursion(n - 1));

	if ((aprox_raiz) * (aprox_raiz) < n)
		return (aprox_raiz + 1);

	if ((aprox_raiz + 1) * (aprox_raiz + 1) > n)
		return (-1);

	return ( aprox_raiz);

	/*preguntar si se puede usar funcion auxiliar*/
}
