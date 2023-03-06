#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: charged array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n);
{
	int i = 0;

	for (; n > 0; 1++)
	{
		s[1] = b;
		n--;
	}
	return (s);
}
