#include "lists.h"
/**
 * list_len - To the number of elements in a linked list_t list.
 * @h: A pointer to the first node.
 * Return: the number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t c;

	c = 0;
	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
