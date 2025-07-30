#include "hash_tables.h"
#include <stdlib.h>

void
hash_table_delete(hash_table_t *ht)
{
	hash_node_t *nodo, *temp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		nodo = ht->array[i];
		while (nodo != NULL)
		{
			temp = nodo->next;
			free(nodo->key);
			free(nodo->value);
			free(nodo);
			nodo = temp;
		}
	}

	free(ht->array);
	free(ht);
}
