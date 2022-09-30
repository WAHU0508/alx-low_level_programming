#include <stdio.h>

/**
 * main - prints name followed by new line
 * @arg: number of command line arguments
 * @argv: array that contains command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
