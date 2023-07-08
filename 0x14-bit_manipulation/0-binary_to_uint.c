#include "main.h"
#include <stdio.h>

/**
 * main - write a function that converts number to an unsigned int
 *
 * binary_to_uint: converts binary to unsigned int
 * @b: is string to onvert to binary
 *
 * Return: unsigned int or 0
 */
unsigned int binary_to_uint(const char *b);
{
	unsigned int n, i;

	if (!b || !*b)

	return (0);

	n = i = 0;

	while (b[i])
	{
		if (b[i] > 50)

		return (0);

		else if (b[i] == 50)
		{
			n <<= 1;
			n += 1;
		}
		else
			n <<= 1;
		i++;
	}

	return (n);
}

