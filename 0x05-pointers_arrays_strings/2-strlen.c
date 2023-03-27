#include "main.h"

/**
 * _strlen - return a length of a string
 * @s: Length of string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
