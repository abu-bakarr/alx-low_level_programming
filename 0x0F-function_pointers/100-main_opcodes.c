#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
* @argc: number of arguments
* @argv: value of arguments
* Return: always success!
*/

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
