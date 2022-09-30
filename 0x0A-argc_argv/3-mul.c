#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: count the number of arguments
 * @argv: arguments
 * Return: 0 if its true or 1 if false
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 2)

	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("error\n");
	return (1);
}
