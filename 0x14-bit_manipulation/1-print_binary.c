#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the caharacter c to stdout
 * @c: character to print
 *
 * Return: 1 on success, -1 on error
 * errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_binary - prints the binary representation of a number
 *
 * @n: interger from user
 *
 */
void print_binary(unsigned long int n)
{
	int x;
	int y = 0;
	unsigned long int z;

	x = 64;
	while (x >= 0)
	{
		z = n >> x;
		if (z & 1)
		{
			_putchar('1');
			y++;
		}
		else if (y)
			_putchar('0');
		x--;
	}
	if (!y)
	{
		_putchar('0');
	}
}
