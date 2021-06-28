#include "holberton.h"

/**
 * puts2 - Write a function that prints every other character of a string
 * @str: a variable string as referencia
	*
 * followed by a new line.
	* Return: none.
 */

void puts2(char *str)
{
int len = 0, i = 0;
while (str[len] != '\0')
len++;
for (; i < len; i += 2)
_putchar(str[i]);
_putchar(10);
}
