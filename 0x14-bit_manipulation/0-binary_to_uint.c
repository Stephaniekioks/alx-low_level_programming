#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to astring of 0 and 1 chars
 *
 * Return: the converted numbers or 0 if,
 * there is one or more chars in the string b that is not 0 or 1
 * if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	int y;

	if (!b)
		return (0);

	for (y = 0; b[y]; y++)
	{
		if (b[y] < '0' || b[y] > '1')
			return (0);
		x = 2 * x + (b[y] - '0');
	}

	return (x);
}
