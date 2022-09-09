#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
 *
 * Retain: Always 0 (success)
 */
int main(void)
{

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (1 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, 1);
	}
	else if (1 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, 1);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, 1);
	}
	return (0);
}
