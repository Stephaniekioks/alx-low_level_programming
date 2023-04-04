#include "lists.h"
/**
 * *get_nodeint_at_index - function that returns nth node of a linked list
 * @head: pointer to head node
 * @index: index of node
 *
 * Return: Null if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *temp = head;

	while (temp && n < index)
	{
		temp = temp->next;
		n++;
	}

	return (temp ? temp : NULL);
}
