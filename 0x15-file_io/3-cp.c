#include "main.h"
/**
 * main - program that copies the content of a file
 * to another file
 * @argv: argument vector
 * @argc: argument count
 * Return: 0 on success or _ on failure
 */
int main(int argc, char *argv[])
{
	int org_file;
	int dest_file;
	ssize_t read_len;
	ssize_t write_len;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp org_file dest_file\n");
		exit(97);
	}
	org_file = open(argv[1], O_RDONLY);
	if (org_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: cannot read from file %s\n", argv[1]);
			exit(98);
	}
	dest_file = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 00644);
	while ((read_len = read(org_file, buff, 1024)) != 0)
	{
		if (dest_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: cannot write to %s\n", argv[2]);
			exit(99);
		}
		if (read_len == -1)
		{
			dprintf(STDERR_FILENO, "Error: cannot read from file %s\n", argv[1]);
			exit(98);
		}
	}
	write_len = write(dest_file, buff, read_len);
	if (write_len != read_len || write_len == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}
	if (close(org_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", org_file);
		exit(100);
	}
	if (close(dest_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't clode fd %d\n", dest_file);
		exit(100);
	}
	return (0);
}
