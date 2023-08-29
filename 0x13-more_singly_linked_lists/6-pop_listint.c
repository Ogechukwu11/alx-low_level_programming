#include "lists.h"
/**
 * pop_listint - To delete the head node of a listint_t linked list.
 * @head: A pointer to a pointer of the first node.
 * Return: returns the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *newnode;
	int c;

	if (*head == NULL)
		return (0);
	c = (*head)->n;
	newnode = (*head)->next;
	free(*head);
	*head = newnode;
	return (c);
}
