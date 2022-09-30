#include "main.h"
#include <stdio.h>

/**
 * main - print the name of the program, followed by a new line
 * @argc: count the number of arguments
 * @argv: the arguments
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
