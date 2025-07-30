#include "hash_tables.h"

int
hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int i;

	hash_table_set *new, *actual;
	
	if (key == NULL || *key == '\0'|| ht == NULL)
		return (0);

	/*calcular indice*/
	i = key_index(key,ht->size);

	/*verifca que la clve ya existe*/
	actual = ht->array[i];

	while (actual != NULL) /*recorre nodos hasta el final*/
	{
		if (actual->key == 0)
		{
			
		}
	}

	

}
