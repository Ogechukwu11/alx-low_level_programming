#include "lists.h"
/**
 * print_list - To print all the elements of a linked list.
 * @h: a pointer to the string in lists_t list.
 * Return: elements of the lists_t list.
 */

size_t print_list(const list_t *h)
{
	size_t c;

	c = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		c++;
		h = h->next;
	}

	return (c);
}
