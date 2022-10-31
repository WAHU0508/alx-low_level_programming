#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0, i;
	unsigned int dec = 0;

	if (b == NULL)
		return (dec);

	/*find string length*/
	while (b[len] != '\0')
		len++;
	len = len - 1;

	/*iterate string if '1' then multiply by power of 2*/
	/*get power of 2 via binary*/
	i = 0;
	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (dec);

		if (b[i] == '1')
			dec = dec + (1 * (1 << len));
		i++;
		len--;
	}

	return (dec);
}
