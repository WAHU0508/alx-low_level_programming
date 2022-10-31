#include "main.h"
#include <stdio.h>

/**
 * print_binary - converts unsigned int to binary
 * @n: unsigned int
 * Return: binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int c = n, m = 1;
	int len = 0;

	while (c > 0)
	{
		len++;
		c >>= 1;
	}
	len = len - 1;

	if (len > 0)
		m = m << len;

	while (m > 0)
	{
		if (n & m)
			_putchar('1');
		else
			_putchar('0');

		m >>= 1;
	}
}
