#include <stdio.h>

/**
 * main - print the alphabets in reverse
 * Return: Always 0
 */
int main(void)
{
	char vc;

	for (vc = 'z'; vc >= 'a'; vc--)
		putchar(vc);

	putchar('\n');

	return (0);
}
