#include "holberton.h"
#include <stdio.h>

/**
 * main - function for this project.
 * @argc: is the length
 * @argv: string that holds statement.
 * Return: Null/Zero.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
