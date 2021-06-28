#include"holberton.h"
/**
 *rev_string - prints string in reverse followed by newline
 *@s: accepted string or array of chars
 *Return: void
 */
void rev_string(char *s)
{
	int i, j, k;
	char tmp;

	i = 0;
	while (s[i] != '\0')
		++i;
	k = 0;
	for (j = i - 1 ; j >= k ; j--)
	{
		tmp = s[j];
		s[j] = s[k];
		s[k] = tmp;
		k++;
	}
}
