#include "main.h"

/**
 * _abs - compute absolute value
 *
 * @i: input number as an integer
 *
 * Return: absolute value
 */
int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else if (i == 0)
	{
		return (0);
	}
	else
	{
		return (-1 * i);
	}
	_putchar('\n');
}
