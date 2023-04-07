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
	int x, flipcount = 0;
	unsigned long int one =  n ^ m;
	unsigned long int two;

	for (x = 64; x >= 0; x--)
	{
		two = one >> x;
		if (two & 1)
			flipcount++;
	}

	return (flipcount);
}
