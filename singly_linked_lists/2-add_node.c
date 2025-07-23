#include "lists.h"
#include <stdlib.h>
#include <string.h>

list_t
*add_node(list_t **head, const char *str)
{
	list_t *nuevo;

	if (str == NULL)
		return (NULL);

	nuevo = malloc(sizeof(list_t));
	if (nuevo == NULL)
		return (NULL);

	nuevo->str = strdup(str); /*copia el string ya con malloc*/
	if (nuevo->str == NULL)
	{
		free(nuevo);
		return (NULL);
	}

	nuevo->len = strlen(str);
	nuevo->next = *head; /*puntero al head anterior*/
	*head = nuevo; /*actualiza el puntero head al nuevo nodo*/

	/**
	 * lista antes: head - [A] - [B] - [C] - NULL
	 * lista despues: head - [NEW] - [A] - [B] - [C] - NULL
	 */

	return (nuevo);

}
