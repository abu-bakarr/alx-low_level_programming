#include "holberton.h"
/**
 * _strlen - function length of a string
 * @s: string input
 * Return: returns length of a string
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}
/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: strings to write to the file
 * Return: 1 or -1 if fails
 */
int create_file(const char *filename, char *text_content)
{
	int new_file, written_file;

	if (filename == NULL)
		return (-1);

	new_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (new_file == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	written_file = write(new_file, text_content, _strlen(text_content));

	if (written_file == -1)
		return (-1);

	close(new_file);
	return (1);
}
