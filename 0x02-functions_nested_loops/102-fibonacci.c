#include "main.h"

/**
 * main - print first 50 fibonacci
 *
 * Description: Pritns the sum of even-valued
 *
 * Return: 0 always
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	float total_sum;

	while (1)
	{
		sum = fib1 + fib2;

		if (sum > 4000000)
		break;
		
		if ((sum % 2) == 0)
		total_sum += sum;

		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", total_sum);

	return (0);
}
