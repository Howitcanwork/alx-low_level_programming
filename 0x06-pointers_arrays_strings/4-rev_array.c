#include "main.h"
/**
 * reverse_array - function
 * @a: array of integrs
 * @n: number of element
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp;

	for (i = 0; i < j; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;

		j--;
	}
}
