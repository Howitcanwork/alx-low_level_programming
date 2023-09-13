#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - a function
 * @array: array
 * @size: size of an array
 * @action: pointer to function
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *poi = array + size - 1;

	if (array && size && action)
		while (array <= poi)
			action(*array++);
}
