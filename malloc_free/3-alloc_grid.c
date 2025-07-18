#include "main.h"
#include <stdlib.h>

int
**alloc_grid(int width, int height)
{
	int i, j;
	int **matriz;

	if (width <= 0 || height <= 0)
		return (NULL);

	matriz = malloc(sizeof(int *) * height);  /* array de punteros (filas)*/
		if (matriz == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		matriz[i] = malloc(sizeof(int) * width);  /* cantidad de columnas */
		if (matriz[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(matriz[j]);
			free(matriz);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			matriz[i][j] = 0;
	}

	return (matriz);
}
