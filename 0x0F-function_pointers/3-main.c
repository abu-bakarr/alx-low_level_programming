#include "3-calc.h"
/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument value
 * Return: always success
 */
int main(int argc, char *argv[])
{
	int my_little_var;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((argv[2][1] != 0) || ((argv[2][0] != '+') &&  (argv[2][0] != '-')
		&& (argv[2][0] != '*') && (argv[2][0] != '/') && (argv[2][0] != '%')))
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || (argv[2][0] == '%')) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	my_little_var = get_op_func(argv[2]) (atoi(argv[1]), atoi(argv[3]));
			printf("%d\n", my_little_var);
	return (0);

}
