#include "lists.h"
/**
 * print_listint - To print all the elements of a listint_t list.
 * @h: A pointer to the first node
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}
	return (c);
}
