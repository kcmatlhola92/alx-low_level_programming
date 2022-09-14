#include "main.h"

/**
 * time_table - A function that prints the 9 times table
 *
 * Description: It prints 9 times table starting with 0
 *
 * Example Table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 *
 */

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; ++num)
	{
		_putchar(48)
		for (mult = 1; mult <= 9; ++mult)
		{
			_putchar(',');
			_putchar('');

			prod = num * mult;
			_putchar('\n');
		}
	}
}
