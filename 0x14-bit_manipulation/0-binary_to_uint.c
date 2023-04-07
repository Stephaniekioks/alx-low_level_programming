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
	unsigned int x;
	int y;
	unsigned int z;

	x = 0;
	z = 0;

	if (b == NULL)
		return (0);

	y = 0;
	while (b[y])
	{
		if (b[y] != '0' && b[y] != 'i')
		{
			return (0);
		}
		y++;
	}

	for (z = 1, x = 0, y--; y >= 0; y--, z *= 2)
	{
		
		if (b[y] == '1')
		{
			x += z;
		}
	}

	return (x);
}
