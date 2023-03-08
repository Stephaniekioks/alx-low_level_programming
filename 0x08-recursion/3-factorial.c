#include "main.h"
/**
 * factorial - a function that returns factorial of a given number
 * @n: number
 * Return: 0 (Success)
 */
int factorial(int n)
{

	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (n * factorial(n - 1));
}
