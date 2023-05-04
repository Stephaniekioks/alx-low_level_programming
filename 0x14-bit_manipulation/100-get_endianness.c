#include "main.h"
/**
 * get_endianness - check endianness
 * Return: if big endian 0, or 1 if little endian
 */
int get_endianness(void)
{
	int i;

	i = 1;
	if (*(char *)&i == 1)
		return (1);
	else
		return (0);
}
