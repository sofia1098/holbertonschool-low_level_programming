#include "lists.h"
#include <stdlib.h>

void
free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next; /*guarda el sig*/
		free(head); /*libera actual*/
		head = temp; /*avanza al sig nodo*/
	}
}
