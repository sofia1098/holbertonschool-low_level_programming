#include "main.h"
#include <stdlib.h>

int
**alloc_grid(int width, int height)
{
	int i, j;

	int **matriz;

	if (width <= 0 || height <= 0)
		return (NULL);

	matriz = malloc(sizeof(int *) * height);
	if (matriz == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		matriz[i] = malloc(width * sizeof(int *));

		for (j = 0; j < width; j++)
			matriz[i][j] = 0;
	}
	return (matriz);
}
