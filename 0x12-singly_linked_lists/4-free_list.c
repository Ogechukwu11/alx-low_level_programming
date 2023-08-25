#include "lists.h"
/**
 * free_list - To free the list_t list.
 * @head: A pointer to the first node.
 * Return:  void
 */

void free_list(list_t *head)
{
	list_t *cn, *nn;

	cn = head;

	while (cn != NULL)
	{
		nn = cn->next;
		free(cn->str);
		free(cn);
		cn = nn;
	}
}
