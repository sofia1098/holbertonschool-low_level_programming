#include "lists.h"

size_t 
dlistint_len(const dlistint_t *h)
{
	size_t nodos = 0;

	while (h != NULL)
	{
		h = h->next; /* recorre los nodos a traves del ptro next*/
		nodos++;
	}
	return (nodos);
}
