#include "lists.h"
/**
 * add_nodeint - To add a new node at the beginning of a listint_t list
 * @head: A pointer to the pointer of the first node
 * @n: Data of the first node
 * Return: The address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
