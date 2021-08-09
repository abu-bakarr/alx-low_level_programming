#include "holberton.h"
/**
*read_textfile - reads a text file and prints it to the POSIX standard output
*@filename:char strinf of file name
*@letters: size or number or letter to read.
*Return: number of letter read and print or 0 If it is error.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdopen;
	ssize_t readcount, writecount;
	char *buffer;

	if (filename == NULL)
		return (0);

	fdopen = open(filename, O_RDWR);
	if (fdopen == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	readcount = read(fdopen, buffer, letters);
	if (readcount == -1)
		return (0);

	writecount = write(STDOUT_FILENO, buffer, readcount);
	if (writecount == -1 || readcount != writecount)
		return (0);
	free(buffer);

	close(fdopen);
	return (writecount);
}
