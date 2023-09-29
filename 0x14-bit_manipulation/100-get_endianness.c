#include "main.h"

/**
 * get_endianness - function
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int lu = 1;
	char *mu = (char *)&lu;

	return (*mu);
}
