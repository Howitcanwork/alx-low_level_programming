#include "main.h"
/**
 * *_memcpy - function
 * @dest: where to copy the memory to
 * @src: where to copy from
 * @n: num of bute
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
