#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: zero if no error and non 0 if erros
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
