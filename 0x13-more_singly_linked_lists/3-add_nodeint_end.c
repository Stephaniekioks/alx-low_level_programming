#include "list.h"

/**
 * *add_nodeint_end - function that adds a new node at the end
 * of a listint_t list
 * @n: integer
 * @head: pointer to the head node
 * Return: the address of the new element
 * Null if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temp = *head;


	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newnode;

	return (newnode);
}
