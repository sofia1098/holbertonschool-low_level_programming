#include "lists.h"
#include <stdlib.h>

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end, *temp;

	if (head == NULL)
		return (NULL);

	end = malloc(sizeof(dlistint_t));
	if (end == NULL)
		return (NULL);

	end->n = n;
	end->next = NULL;

	if (*head == NULL)
	{
		end->prev = NULL; /*lista vacia no hay nodo aterior*/
		*head = end;
		return (end);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next; /*sig nodo*/

	temp->next = end; /*enlaza nuevo nodo al final*/
	end->prev = temp; /*penultimo nodo ahora*/

	return (end);

}
