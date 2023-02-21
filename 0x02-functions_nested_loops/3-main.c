#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	int r;

	r = islower('H');
	putchar(r + '0');
	r = islower('o');
	putchar(r + '0');
	r = islower(108);
	putchar(r + '0');
	putchar('\n');
	return (0);
}


