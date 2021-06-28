#include "holberton.h"
/**
 *_puts - will be same as normal puts (prints string followed by newline)
 *@str: accepted string pointer
 *Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0 ; *str != '\0' ; str++)
		_putchar(str[i]);
	_putchar('\n');
}
