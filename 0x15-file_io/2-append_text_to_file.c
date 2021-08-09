#include "holberton.h"
/**
*append_text_to_file - function that appends text at the end of a file.
*@filename:char strinf of file name
*@text_content: size or number or letter to read.
*Return:return 1 if It is succes or -1 if it is fail
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fdopen, status, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fdopen = open(filename, O_APPEND | O_WRONLY);
	if (fdopen == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	status = write(fdopen, text_content, i);
	if (status == -1)
		return (-1);

	close(fdopen);
	return (1);
}
