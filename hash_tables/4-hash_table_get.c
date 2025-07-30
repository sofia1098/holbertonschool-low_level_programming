#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

char
*hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *nodo;
	unsigned long int idx;

	if (!ht || !key || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	nodo = ht->array[idx];

	while (nodo) /*no es nulo*/
	{
		if (strcmp(nodo->key, key) == 0)
			return (nodo->value);
		nodo = nodo->next;
	}
	return (NULL);
}
