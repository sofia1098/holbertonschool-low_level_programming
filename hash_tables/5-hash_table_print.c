#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

void
hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nodo;
	unsigned long int i;
	int first = 1; /*para las comas*/

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		nodo = ht->array[i];
		while (nodo != NULL)
		{
			if (first == 0)
				printf(", ");

			printf("'%s': '%s'", nodo->key, nodo->value);
			first = 0;
			nodo = nodo->next;
		}
	}
	printf("}\n");
}
