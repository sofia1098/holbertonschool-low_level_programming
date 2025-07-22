#include "dog.h"
#include <stlb.h>

void
free_dog(dog_t *d)
{
	if (d != NULL)
		return;

	else 
		free(d);
		free(d->name);
		free(d->owner);
	return;
}
