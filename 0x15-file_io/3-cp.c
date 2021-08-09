#include "holberton.h"
/**
 * error_98 - function for unread or not created file
 * @fileto: file name of filefrom after read fails
 * Return: Nothing
 */
void error_98(char *fileto)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fileto);
	exit(98);
}
/**
 * error_99 - function for not created or unwrite file
 * @filefrom: file name of fileto after write fail
 * Return: Nothing
 */
void error_99(char *filefrom)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filefrom);
	exit(99);
}
/**
 * error_100 - function for a file that cannot be closed
 * @fd: file descriptor for fileto of filefrom
 * after close fails
 * Return: Nothing
 */
void error_100(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
/**
 * main - function that copies the content
 * of a file to another file
 * @argc: argument counter
 * @argv: arguments variable
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int read_file, write_file, close_file;
	int file_1, file_2;
	char *buf[1024];

	if (argc != 3)  /* ./cp from to */
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_1 = open(argv[1], O_RDONLY); /* file from */
	if (file_1 == -1)
		error_98(argv[1]);

	file_2 = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664); /* file to */

	if ((file_2 == -1))
		error_99(argv[2]);

	while ((read_file = read(file_1, buf, 1024)) != 0)
		/*checks for -1 or non 0 number */
	{
		if (read_file == -1)
			error_98(argv[1]);

		write_file = write(file_2, buf, read_file);
		if (write_file == -1)
			error_99(argv[2]);
	}

	close_file = close(file_1);
	if (close_file == -1)
		error_100(file_1);

	close_file = close(file_2);
	if (close_file == -1)
		error_100(file_2);

	return (0);
}
