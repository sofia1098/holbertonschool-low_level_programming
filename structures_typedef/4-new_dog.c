#include "dog.h"
#include <stdlib.h>
#include <string.h>

dog_t
*new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	char *new_name;
	char *new_owner;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	new_name = malloc(strlen(name) + 1);
	if (new_name == NULL)
	{
		free(new_name);
		free(d);
		return (NULL);
	}
	strcpy(new_name, name);

	new_owner = malloc(strlen(owner) + 1);

	if (new_owner == NULL)
	{
		free(new_owner);
		free(d);
		return (NULL);
	}
	strcpy(new_owner, owner);

	d->name = new_name;
	d->age = age;
	d->owner = new_owner;

	return (d);
}
