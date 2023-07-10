#include "main.h"
/*
 * create_file - fuction that creates a file with given context
 * @filename: name of new to be created
 * @text_content: Null terminated string to write to the file
 *
 * Return: 1 on success, -1 if the function fails
 */
int create_file(const char *filename, char *text_content)
{
	int file, result = 1, countn = 0;

	if (!filename)
	return (-1);
	file = open(filename,O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[countn])
			countn++;
		result = write(file, text_content, countn);
	}
	if (result == -1)
		return (-1);
	close(file);
	return(1);
}
