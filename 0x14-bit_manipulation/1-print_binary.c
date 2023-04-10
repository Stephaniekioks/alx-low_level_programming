#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number
 * @n: binary number
 */
void print_binary(unsigned long int n)
{
	int x = 0;
	int y;
	unsigned long int z;

	y = 64;
	while (p >= 0)
	{
		z = n >> y;

		if (z & 1)
		{
			_putchar('1');
			x++;
		}
		else if (x)
			_putchar('0');
		y--;
	}
	if (!x)
	{
		_putchar('0');
	}
}
