#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;


	for (i = 48; i < 58; i++)
	{

		for (j = 48; j < 58; j++)
		{

			for (k = 48; k < 58; k++)
			{
				if (k <= j)
					continue;
				if (j <= i)
					continue;
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55 && j == 56 && k == 57)
				{
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
