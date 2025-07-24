#include "lists.h"
#include <stdlib.h>

dlistint_t
*insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;

	dlistint_t *temp = *h, *new_n;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; temp != NULL && i < idx - 1; i++)
	{
		temp = temp->next;
	}

	if (temp == NULL)
		return (add_dnodeint_end(h, n));

	/*crear nuevo nodo*/
	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
	{
		free(new_n);
		return (NULL);
	}
	/*ubico el nodo entre el temp y el next*/
	new_n->n = n;
	new_n->prev = temp;
	new_n->next = temp->next;

	return (new_n);
}
