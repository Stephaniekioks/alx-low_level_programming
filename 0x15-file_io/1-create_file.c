#include "main.h"
/*
 * create_file - fuction that creates a file
 * @filename: name of new to be created
 * @text_content: Null terminated string to write to the file
 *
 * Return: 1 on success, -1 if the function fails
 */
int create_file(const char *filename, char *text_content)
{
	int i, j, new = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (new = 0; text_content[new];)
				new++;
	}

	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0);
	j = write(i, text_content, new);

	if (i == -1 || j == -1)
		return (-1);

	close(i);

	return (1);
}
