#include "lists.h"
/**
 * insert_nodeint_at_index - To insert a new node at a given position.
 * @head: A pointer to a pointer of the first node.
 * @idx: The index of the list.
 * @n: The data.
 * Return: The address of the newnode.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;

	if ((*head == NULL) || (head == NULL))
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	temp = *head;
	while ((idx - 1) > 0)
	{
		temp = temp->next;
		idx--;
	}
	if (temp->next == NULL)
		return (NULL);
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
