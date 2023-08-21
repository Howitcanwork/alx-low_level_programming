#include "main.h"
/**
 * swap_int - function
 * @a: integer
 * @b: integer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
