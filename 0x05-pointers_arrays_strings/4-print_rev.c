#include"holberton.h"
/**
 * print_rev - prints string in reverse followed by newline
 *@s: accepted string or array of chars
 *Return: void
 */
void print_rev(char *s)
{
	int i, j;
	char *c = s;

	i = 0;
	while (c[i] != '\0')
		++i;
	for (j = i - 1 ; j >= 0 ; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
