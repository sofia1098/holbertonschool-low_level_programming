#include "lists.h"

size_t
list_len(const list_t *h)
{
	int x = 0;

	while (h != NULL)
	{
		x++;
		h = h->next;
	}
	return (x);
}
