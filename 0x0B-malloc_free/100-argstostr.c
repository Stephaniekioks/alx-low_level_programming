#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 *
 * @ac: number of arguments
 * @av: pointer to arguments
 *
 * Return: Null if ac = 0 or av = 0
 * NULL if it fails
 * pointer to anew string
 *
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, k = 0, l = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
		l++;
	}
	l++;
	s = malloc(l * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = o; av[i][j]; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
