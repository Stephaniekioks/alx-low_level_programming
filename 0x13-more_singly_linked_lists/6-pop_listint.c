#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: pointer to head node
 *
 * Return: the head node's data.
 * if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t = *temp;
	int x;

	if (*head == NULL)
		return (0);
	
	*temp = *head;
	x = (*head)->n;
	*temp = (*head)->next;
	free(*head);
	*head = temp;

	return (x);
}
