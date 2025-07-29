#include <stdlib.h>
#include "hash_tables.h"

hash_table_t
*hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	/* Asignar memoria para la estructura de la tabla hash */
	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	/* Asignar memoria para el array de punteros a nodos */
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	/* Inicia todos los elementos del array a NULL */

	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);


}
