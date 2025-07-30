#include "hash_tables.h"

int
hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int idx;

	char *copia;

	hash_table_set *new, *actual;
	
	if (key == NULL || *key == '\0'|| ht == NULL || value == NULL)
		return (0);

	copia = strup(value);/*copia con malloc un string*/
	if(!copia)
		return (0);

	i = key_index((const unsigned char *)key,ht->size);/*casteo*/
	------

	actual = ht->array[i];

	while (actual != NULL) /*recorre nodos hasta el final*/
	{
		if (actual->key == 0)
		{

		}
	}
 /* Crear un nuevo nodo para la clave */
	new = malloc(sizeof(ht));
	if (new == NULL)
	{
		free(new);
		return (0);
	}
	/*duplicar clave*/
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}

	new->value = strdup ()

}
