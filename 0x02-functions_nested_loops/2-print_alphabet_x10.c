#include "main.h"

/**
 * print_alpha - prints 10X alpha in lowercase
 */
void print_alphabet_x10(void)
{
	int ten;
	char az;

	for (ten = 0; <= 9; ten++)
	{
		for (az = 'a'; az <= 'z'; az++)
			_putchar(az);
		_putchar('\n');
	}
}
