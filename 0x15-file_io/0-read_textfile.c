#include "holberton.h"
/**
 * read_textfile - Function that reads a text file and prints it to the POSIX
 * standard output
 *
 * @filename: Pointer type char
 * @letters: Variable type size_t
 *
 * Return: The actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t r_counter, w_counter;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(buffer) * letters);

	if (buffer == NULL)
		return (0);

	r_counter = read(fd, buffer, letters);

	if (r_counter == -1)
		return (0);

	w_counter = write(STDOUT_FILENO, buffer, r_counter);

	if (w_counter == -1)
		return (0);

	close(fd);
	free(buffer);
	return (r_counter);
}
