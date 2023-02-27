#include "main.h"
/**
 * _puts - prints a string, followed by anewline ,to stdout
 * @str: string to print
 */
void _put(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar(''\n);
}
