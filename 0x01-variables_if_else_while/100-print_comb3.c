#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program that prints all possible different combinations
 * Return: Always 0
 */
int main(void)
{
	int d, p, q;

	for (d = '0'; d < '9'; d++)
	{
	for (p = d + 1; p <= '9'; q++)
	{
	for (q = p + 1; q <= '9'; q++)
	{
	if ((p != d) != q)
	{
	putchar(d);
	putchar(p);
	if (d == '7' && p == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');

	return (0);

}

