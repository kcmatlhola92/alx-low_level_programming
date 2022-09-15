#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n:  times the character \ should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i;

	int j
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('\\');
		_putchar('\n');

		for (i = 0; i < (n - 1); i++)
		{
			for (j = i; j >= 0; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
