#include "main.h"
#include <stdlib.h>

int
**alloc_grid(int width, int height)
{
	int i, j;

	int **matriz;

	if (width <= 0 || height <= 0)
		return (NULL);

	matriz = malloc(sizeof(int *) * height); /*espaico para filas*/
	if (matriz == NULL)
		return (NULL);

	for (i = 0; i < height; i++) /*para cada fila*/
	{
		matriz[i] = malloc(width * sizeof(int)); /*cantidad de olumnas*/	
		if (matriz[i] == NULL)
			return (NULL);
		/*iniciar en 0 todos los espacios*/
		for (j = 0; j < width; j++)
			matriz[i][j] = 0;
	}
	return (matriz);
}
