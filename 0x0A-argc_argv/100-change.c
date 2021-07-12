#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change for an amount
 *\of money
 * @argc: count of the arguments
 * @argv: an array of pointers to the strings which are those arguments
 *
 * Return: returns 0 or 1
 */
int main(int argc, char *argv[])
{
	int money, change, qt, dime, nk, two, pn;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = qt = dime = nk = two = pn = 0;
	money = atoi(argv[1]);

	if (money / 25 != 0)
	{
		qt = money / 25;
		money = money - (qt * 25);
	}
	if (money / 10 != 0)
	{
		dime = money / 10;
		money = money - (dime * 10);
	}
	if (money / 5 != 0)
	{
		nk = money / 5;
		money = money - (nk * 5);
	}
	if (money / 2 != 0)
	{
		two = money / 2;
		money = money - (two * 2);
	}
	if (money / 1 != 0)
	{
		pn = money;
	}

	change = qt + dime + nk + two + pn;
	printf("%d\n", change);
	return (0);
}
