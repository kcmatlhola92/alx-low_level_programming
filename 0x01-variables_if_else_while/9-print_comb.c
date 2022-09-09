#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: zero if no error and non 0 if erros
 */
int main(void)
{
	int number;

	for (number = 48; number < 58; number++)
	{
		putchar(number)
		if (number != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
