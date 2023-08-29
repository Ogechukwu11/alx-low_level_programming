#include "lists.h"
/**
 * free_listint2 - A function that frees a listint_t list.
 * @head: A pointer to a pointer of the first node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *n, *newnode;
	int c = 0;

	if (head == NULL)
		return;

	n = *head;
	while (n != NULL)
	{
		newnode = n->next;
		free(n);
		n = newnode;
		c++;
	}
	free(newnode);
	*head = NULL;
}
