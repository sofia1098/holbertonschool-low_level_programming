#include "lists.h"
#include <stdio.h>

size_t
print_dlistint(const dlistint_t *h)
{
	int nd = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nd++;
	}
	return (nd);

}
