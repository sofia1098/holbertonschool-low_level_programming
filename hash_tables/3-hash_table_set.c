#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

int
hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int idx;

	char *copia;

	hash_node_t *new, *actual; /*ptr a nodo*/

	if (key == NULL || *key == '\0' || ht == NULL || value == NULL)
		return (0);

	copia = strdup(value);/*copia con malloc un string*/
	if (!copia)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);/*casteo*/
	actual = ht->array[idx];

	while (actual != NULL) /*si la lista en ese idx no esta vacia*/
	{
		if (strcmp(actual->key, key) == 0)/*compara dos str y si son iguales r(0)*/
		{
			free(actual->value); /*Si key existe, se reemplaza el valor anterior xnew*/
			actual->value = copia;
			return (1);
		}
		actual = actual->next;/*me muevo al sig nodo*/
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(copia);
		return (0);
	}

	/*duplicar clave en nuevo nodo*/
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(copia);
		free(new);
		return (0);
	}
/*conecto el nuevo nodo como primero en la lista*/
	new->value = copia;
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);

}
