#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - function for this project.
 * @argc: is the length
 * @argv: string that holds statement.
 * Return: Null/Zero.
 */

int main(int argc, char *argv[])
{
	int i, j, n, sum;

	sum = 0;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		n = atoi(argv[i]);
		sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
