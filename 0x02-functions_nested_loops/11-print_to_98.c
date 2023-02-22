#include "main.h"
/**
 * print_to-98 - prints all natural numbers from n to 98
 * @n: int being evaluated
 *
 * Return: (0)
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%i, ", n--);
		}
		printf("%i\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%1, ", n++);
		}
		printf("%i\n", n);
	}
}
