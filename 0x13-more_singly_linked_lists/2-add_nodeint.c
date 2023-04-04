#include "lists.h"
/**
 * *add_nodeint - function that adds a new node
 * at the beginning of a linked list
 * @head: pointer to the head node
 * @n: integer
 * Return: the address of the new element
 * Null if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
