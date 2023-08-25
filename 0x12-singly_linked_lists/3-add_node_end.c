#include "lists.h"
#include <string.h>
/**
 * add_node_end - To add a new node at the end of a list_t list.
 * @head: A pointer to the first node.
 * @str: A string.
 * Return: Address of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *t;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	n->len = strlen(str);
	n->next = NULL;
	if (*head == NULL)
		*head = n;
	else
	{
		t = *head;
		while (t->next != NULL)
			t = t->next;
		t->next = n;
	}
	return (n);
}
