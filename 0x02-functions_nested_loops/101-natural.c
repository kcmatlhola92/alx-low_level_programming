#include "main.h"

/**
 * main - check for multiples of 3 and 5
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int sum, num;

	for (num = 0; num < 1024; ++num)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
		sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
