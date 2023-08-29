#include "lists.h"
/**
 * add_nodeint_end - To add a new node at the end of a listint_t list.
 * @head: A pointer to a pointer to the the first node
 * @n: Data of the node
 * Return: The address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;
	int count = 0;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		count++;
		temp = temp->next;
	}
	temp->next = newnode;
	return (newnode);
}
