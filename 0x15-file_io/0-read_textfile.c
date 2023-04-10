#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @filename: pointer to the name of the file
 * @letters: number of letters the function should read and print
 * Return: 0 if the file name is null or if write fails
 * or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t text;
	char *buffer;
	int f;
	int x;

	f = open(filename, O_RDONLY);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		return (0);
	}
	x = read(f, buffer, letters);

	text = write(STDOUT_FILENO, buffer, x);

	if (f < 0 || x < 0 || text < 0)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(f);

	return (text);
}
