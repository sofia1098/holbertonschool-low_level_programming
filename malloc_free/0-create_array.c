#include "main.h"
#include <stdlib.h>

char
*create_array(unsigned int size, char c)
{
	char *array;

	unsigned int i;

	if (size > 0)
	{
		array = malloc(size * sizeof(char));

		if (array != NULL)
		{	
			for (i = 0; i < size; i++)
				array[i] = c;
			return(array);
		}
		else
			return (NULL);
	}	
	return(NULL);
}
