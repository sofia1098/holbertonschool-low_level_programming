#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int i;

	int sum1 = 0, sum2 = 0;

	int *p1 = a;// Inicio (fila 0, col 0)
	int *p2 = a + size - 1;

	for (i = 0; i < size; i++)
	{
		sum1 += *p1;
		sum2 += *p2;
		p1 += size + 1;// Mover a sig posición de la diagonal principal
		p2 += size - 1;// Mover a sig de la secundaria
	}

	printf("%d, %d", sum1, sum2);
}
