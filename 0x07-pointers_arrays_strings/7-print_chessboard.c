#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: the input to the pointer
 * Return: no return
 */

void print_chessboard(char (*a)[8])
{
	int count, index;

	for (count = 0; count < 8; count++)
	{
		for (index = 0; index < 8; index++)
		{
			_putchar(a[count][index]);
		}
		_putchar('\n');
	}
}
