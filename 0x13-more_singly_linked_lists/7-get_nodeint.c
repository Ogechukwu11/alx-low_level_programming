#include "lists.h"
/**
 * get_nodeint_at_index - To return the nth node of a listint_t linked list.
 * @head: A pointer to the first node.
 * @index: nth node
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *newnode;
	unsigned int c = 0;

	if (head == NULL)
		return (NULL);
	newnode = head;
	while (newnode != NULL)
	{
		if (c == index)
		{
			return (newnode);
		}
		newnode = newnode->next;
		c++;
	}
	return (NULL);
}
