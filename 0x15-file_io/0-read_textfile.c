#include "holberton.h"
/**
 * read_textfile - function that reads a text file
 * and prints it to the standard output
 * @filename: name of the file
 * @letters: amount of letters to be read and printed
 * Return: (bytes2read)
 * actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes2read, bytes2write;
	int f;
	char *aux;

	if (filename == NULL) /* checks if there is anything to read */
		return (0);

	f = open(filename, O_RDONLY); /* read the file only */

	if (f == -1) /* if fail read, write, open == -1 */
		return (0);

	aux = malloc(sizeof(char) * letters); /* space for \0 */
	if (aux == NULL)
		return (0);

	bytes2read = read(f, aux, letters);
	/* reading into f based on letters, of size aux */

	if (bytes2read == -1)
		return (0);

	bytes2write =  write(STDOUT_FILENO, aux, bytes2read);
	/* write to std out of buf based on bytes_read */

	if (bytes2write == -1)
		return (0);

	free(aux);
	close(f);

	return (bytes2read);
}
