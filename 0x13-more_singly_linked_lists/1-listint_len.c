#include "lists.h"
/**
 * listint_len - To return the number of elements in a linked listint_t list.
 * @h: A pointer to the first element
 * Return: The number of elements
 */

size_t listint_len(const listint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
