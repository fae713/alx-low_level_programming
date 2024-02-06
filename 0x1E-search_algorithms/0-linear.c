#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * linear_search - function that searches for a value to an array.
 * @array: a pointer to the first element of the array to search.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 *  Return: NULL or -1
 */
int linear_search(int *array, size_t size, int value)
{
       	size_t i;

    if (array == NULL)
        return (-1);

    for (i =  0; i < size; i++)
    {
        /* Value found */
        if (array[i] == value)
            return ((int)i);
    }

    /* Value not found */
    return (-1);
}
