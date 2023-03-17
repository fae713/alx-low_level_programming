#include <stdio.h>

/**
 * main - prints alpha in low case
 * Return: Always 0
 */
int main(void)
{
	char rc;

	for (rc =  'a'; rc <= 'z'; rc++)
	{
		putchar(rc);
	}
	putchar ('\n');
	return (0);
}
