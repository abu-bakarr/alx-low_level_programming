#include "holberton.h"
/**
* rot13 -  function that encripts in rot13
* @s: string
* Return: no zero
*/
char *rot13(char *s)
{
	int i = 0;
	int j;
	char ini[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMOPQRSTUVWXYZ";
	char r13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZBCDEFGHIJKLM";

	while (s[i] != '\0')
	{
		for (j = 0; ini[j] != 0 ; j++)
		{
			if (s[i] == ini[j])
			{
				s[i] = r13[j];
			break;
			}
		}
		i++;
	}
	return (s);
}
