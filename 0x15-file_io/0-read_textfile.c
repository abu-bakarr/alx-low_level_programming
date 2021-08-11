#include "holberton.h"

/**
 * read_textfile- function that reads a text file and prints it to stdout
 * @filename: Requiescat
 * @letters: number of letters contained in file
 *
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t mainfile, readpermfile, writepermfile;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);

	mainfile = open(filename, O_RDONLY);
	if (mainfile == -1)
		return (0); /* condition: file cannot be open or read */

	readpermfile = read(mainfile, buffer, letters);
	if (readpermfile == -1)
		return (0); /* condition: file cannot be open or read */

	writepermfile = write(STDOUT_FILENO, buffer, readpermfile);
	if (writepermfile == -1)
		return (0); /* condition: file cannot be open or read */

	free(buffer); /* for every malloc you have to free */
	close(mainfile);
	return (writepermfile);

}
