#include "lists.h"
/**
 * *insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to head node
 * @n: integer
 * @idx: index
 *
 * Return: address of new node or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *newnode;
	listint_t *temp = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);

	newnode->n = x;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (x = 0; temp && x < idx; x++)
	{
		if (x == idx - 1)
		{
			newnode->next = temp->next;
			temp->next = newnode;
			return (newnode);

		}
		else
			temp = temp->next;
	}
	return (NULL);
}
