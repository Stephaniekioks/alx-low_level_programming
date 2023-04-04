#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data of a linked list
 * @head: pointer to the head node
 *
 * Return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
