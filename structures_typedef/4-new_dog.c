#include "dog.h"
#include <stdlib.h>
#include <string.h>

dog_t
*new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *new_name, *new_owner;
	int len_n = 0;
	int len_o = 0;
	int i;

	for (len_n = 0; name[len_n] != '\0'; len_n++)
		;

	for (len_o = 0; owner[len_o] != '\0'; len_o++)
                ;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	new_name = malloc(len_n + 1);
	if (new_name == NULL)
	{
		free(d);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		new_name[i] = name[i];

	new_owner = malloc(len_o + 1);

	if (new_owner == NULL)
	{
		free(new_name);
		free(d);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
		new_owner[i] = owner[i];

	d->name = new_name;
	d->age = age;
	d->owner = new_owner;

	return (d);
}
