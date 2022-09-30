#include <stdio.h>

/**
 * main - prints name followed by new line
 * @arg: number of command line arguments
 * @argv: array that contains command line arguments
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
