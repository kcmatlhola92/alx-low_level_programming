#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse
 *
 * Return: zero if no error and non 0 if erros
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
