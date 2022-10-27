#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: pointer to the first number
 * @m: poiter to the second number
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
}
