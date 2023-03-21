#include "main.h"
/**
 * print_alphabet_x10 - Make alphabet x10 times
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int n, az;

	az = 0;

	while (az < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		az++;
		_putchar('\n');
	}
}
