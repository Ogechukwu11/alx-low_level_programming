#include "lists.h"
/**
 * sum_listint - To get the sum of all the data (n) of a listint_t linked list.
 * @head: A pointer to the first node
 * Return: The sum
 */

int sum_listint(listint_t *head)
{
	listint_t *newnode;
	int sum = 0;

	newnode = head;
	while (newnode != NULL)
	{
		sum = sum + newnode->n;
		newnode = newnode->next;
	}
	return (sum);
}
