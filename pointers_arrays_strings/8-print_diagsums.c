#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int i, j;

	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = size; j > 0; j--)
		{
			sum1 += a[i][i];
			sum2 += a[i][j];
		}
	}
	printf("%d, %d", sum1, sum2);
}
