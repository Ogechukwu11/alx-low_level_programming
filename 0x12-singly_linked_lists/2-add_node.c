#include "lists.h"
#include <string.h>
/**
 * add_node- TO add a new node at the beginning of a list_t list.
 * @head: A pointer to the first node.
 * @str: A string
 * Return: Address  of the new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nn;

	nn = (list_t *)malloc(sizeof(list_t));

	if (nn == NULL)
		return (NULL);
	nn->str = strdup(str);
	nn->len = strlen(str);
	nn->next = *head;
	*head = nn;

	return (*head);
}
