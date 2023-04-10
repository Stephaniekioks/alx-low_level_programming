#include "main.h"
/**
 * flip_bits - function that returns the number of bits needed to flip
 * to get from one number to another
 * @n: first integer
 * @m: second integer
 *
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int y =  n ^ m;

	while (y)
	{
		if (y & 1)
			count++;
		y = y >> 1;
	}
	return (count);
}
