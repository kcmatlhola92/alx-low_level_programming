#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * mainn -  prints the minimum number of coins
 * to make change for an amount of money
 * @argc: count the number of arguments
 * @argv: the argument
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int cents, ncoins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		ncoins += 1;
	}
	printf("%d\n", ncoins);
	return (0);
}
