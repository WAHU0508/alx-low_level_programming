#include <stdio.h>

/**
 * main - prints a number followed by a line
 * @arg: Argument counter
 * @argv - pointer to array of arguments
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
