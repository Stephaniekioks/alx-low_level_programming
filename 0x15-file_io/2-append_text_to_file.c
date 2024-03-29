#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a line
 * @filename: the name of the file
 * @text_content: is the NULL terminated string to add at the end of line
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, x = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (x = 0; text_content[x];)
			x++;
	}
	i = open(filename, O_WRONLY | O_APPEND);
	j = write(i, text_content, x);

	if (i == -1 || j == -1)
		return (-1);

	close(i);
	return (1);
}
