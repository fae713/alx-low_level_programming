#include <stdio.h>

void tortise(void) __attribute__ ((constructor));

/**
 * tortise - prints a sentence before the main
 * function is executed
 */
void tortise(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

