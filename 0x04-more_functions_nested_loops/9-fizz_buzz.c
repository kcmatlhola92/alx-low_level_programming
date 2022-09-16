#include <stdio.h>

/**
 * main - prit number from 1 - 100 followed by a new line
 * prints Buzz each numbers of 3 and 5.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; i++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);

		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
}
