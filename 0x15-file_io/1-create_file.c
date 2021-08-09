#include "holberton.h"

/**
 *create_file- creates a file
 *@filename: name of file to be made
 *@text_content: the text to add to file
 *Return: 1 on success -1 on fail
 */


int create_file(const char *filename, char *text_content)
{
	int fd, test, i;


	if (!filename)
		return (-1);
	if (!text_content)
	{
		fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		close(fd);
		return (1);
	}



	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	for (i = 0 ; text_content[i] ; i++)
		;

	test = write(fd, text_content, i);
	if (test == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
