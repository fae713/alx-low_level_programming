#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * print_array - Prints the given array
 * @array: Pointer to the array to print
 * @start: Start index of the array to print
 * @end: End index of the array to print
 */
void print_array(const int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d%s", array[i], (i != end) ? ", " : "\n");
	}
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low;
	size_t high;
	size_t mid;

	if (!array || size ==  0)
		return (-1);

	low =  0;
	high = size -  1;

	while (low <= high)
	{
		mid = low + (high - low) /  2;

		print_array(array, low, high);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid +  1;
		else
			high = mid -  1;
	}
	return (-1);
}
