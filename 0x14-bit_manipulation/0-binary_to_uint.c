#include "main.h"
/**
 * main - write a function that converts number to an unsigned int
 *
 * binary_to_uint: converts binary to unsigned int
 * @b: is string to onvert to binary
 *
 * Return: unsigned int or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int num, base_two;

	if (!b)
		return (0);

	ui = 0;

	for (num = 0; b[num] != '\0'; num++)
		;

	for (num--, base_two = 1; num >= 0; num--, base_two *= 2)
	{
		if (b[num] != '0' && b[num] != '1')
		{
			return (0);
		}

		if (b[num] & 1)
		{
			ui += base_two;
		}
	}

	return (ui);
}
