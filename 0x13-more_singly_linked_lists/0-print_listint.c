#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints the elements of a linked list
 * @h: linked list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num0 = 0;

	while (h)
	{
		num0++;
		h = h->next;
	}
	return (num0);
}
