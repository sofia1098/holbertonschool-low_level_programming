#include "dog.h"
#include <stdlib.h>
#include <string.h>

dog_t
*new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *new_name, *new_owner;
	int len_n = 0, len_o = 0;
	
	while(*name != '\0')
		len_n++;
	while(*owner != '\0')
		len_o++;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	new_name = malloc(len_n + 1);
	if (new_name == NULL)
	{
		free(d);
		return (NULL);
	}

	strcpy(new_name, name);

	new_owner = malloc(len_o + 1);

	if (new_owner == NULL)
	{
		free(new_name);
		free(d);
		return (NULL);
	}
	strcpy(new_owner, owner);

	d->name = new_name;
	d->age = age;
	d->owner = new_owner;

	return (d);
}
