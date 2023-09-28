#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int lu;
	unsigned int va = 0;

	if (!b)
		return (0);
	for (i = 0; b[lu]; lu++)
	{
		if (b[lu] < '0' || b[lu] > '1')
			return (0);
		va = 2 * va + (b[lu] - '0');
	}
	return (va);
}
