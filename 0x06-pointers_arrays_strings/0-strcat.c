#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * return: void
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
