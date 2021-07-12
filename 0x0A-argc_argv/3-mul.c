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
	int a, b, sum;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	sum = a * b;

	printf("%d\n", sum);

	return (0);
}
