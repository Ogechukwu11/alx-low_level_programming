#include "lists.h"
/**
 * free_listint2 - A function that frees a listint_t list.
 * @head: A pointer to a pointer of the first node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *newnode;
	int c = 0;

	temp = *head;
	while (temp != NULL)
	{
		newnode = temp->next;
		free(temp);
		temp = newnode;
		c++;
	}
	*head = NULL;
}
