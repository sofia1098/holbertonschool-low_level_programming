#include "lists.h"
#include <stdlib.h>
#include <string.h>

list_t
*add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *temp;
	int l = 0;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	n->str = strdup(str); /*copia str*/
	if (n->str == NULL)
	{
		free(n);
		return (NULL);
	}

	for (l = 0; str[l] != '\0'; l++)
		;

	n->len = l;
	n->next = NULL; /* xq es el ultimo nodo*/

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	/*voy de nodo en nodo hasta el ultimo*/
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = n;
	return (n);

}
