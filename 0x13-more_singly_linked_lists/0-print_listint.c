#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints the elements of a linked list
 * @h: linked list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h);
{
	size_t int = 0;

	while (h)
	{
		printf("%d/n", h->n);
		int++;
		h = h->next;
	}
	return (int);
}
