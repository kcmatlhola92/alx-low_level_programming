#include <stdio.h>
#include "main.h"

/**
 * get_bit - the value of a bit at a given index
 * @n: pointer to the number
 * @index: index of a bit
 * Return: the value of the bit at index
 * or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}
