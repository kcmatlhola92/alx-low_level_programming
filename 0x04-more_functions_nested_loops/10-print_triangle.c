#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size:  is the size of the triangle
 *
 * Return: no return
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (space = 1; space <= (size - i); space++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
