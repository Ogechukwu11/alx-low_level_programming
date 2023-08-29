#include "lists.h"
/**
 * free_listint - A function that frees a listint_t list
 * @head: A pointer to the firast node
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *cn, *newnode;
	int c;

	cn = head;
	while (cn != NULL)
	{
		newnode = cn->next;
		free(cn);
		cn = newnode;
		c++;
	}
}
