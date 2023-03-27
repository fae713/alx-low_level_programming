#include "main.h"

/**
 * swap_int - swp two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: a, b
 */

void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
