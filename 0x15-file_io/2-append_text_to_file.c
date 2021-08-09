#include "holberton.h"

/**
 * _strlen - length of a string
 * @s: length of a string
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
 * append_text_to_file - function that appends a text
 * at the end of a file
 * @filename: name of the file
 * @text_content: string to write to the file
 * Return: 1 or -1 if fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int new_file, append;

	if (filename == NULL)
		return (-1);

	new_file = open(filename, O_WRONLY | O_APPEND);

	if (new_file == -1)
		return (-1);

	if (text_content == NULL)
	{
		if (new_file == -1)
		{
			return (-1);
		}
		else
		{
			return (1);
		}
	}

	append = write(new_file, text_content, _strlen(text_content));

	if (append == -1)
		return (-1);

	close(new_file);
	return (1);
}
