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
	int x, count = 0;
	unsigned long int previous =  n ^ m;
	unsigned long int current;

	for (x = 64; x >= 0; x--)
	{
	       current = previous >> x;
		if (current & 1)
			count++;
	}

	return (count);
}
