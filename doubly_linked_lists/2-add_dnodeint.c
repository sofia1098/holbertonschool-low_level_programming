#include "lists.h"
#include <stdlib.h>

dlistint_t
*add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_n;

	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->prev = NULL; /*es el 1ro no hay nodo anterior*/
	new_n->next = *head; /*el sig nodo va ser el next actual*/

	if (*head != NULL)
		(*head)->prev = new_n; /*actualiza el prev del nodohead actual*/

	*head = new_n;  /*el nuevo nodo es el 1ro de la lista*/
	return (new_n);
}
