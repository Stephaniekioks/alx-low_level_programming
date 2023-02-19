#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - write a program that prints all possible combination of two digits.
 * Retrun: 0
 */
int main(void)
{
	int d, p;

	for (d = '0'; d < '9'; d++)
	{
	for (p = d + 1; p <= '9'; P++)
	{
	if (p != d)
	{
	putchar(d);
	putchar(p);
	if (d == '8' && p == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
