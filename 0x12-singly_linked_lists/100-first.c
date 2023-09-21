#include <stdio.h>

void _constructor(void) __attribute__ ((constructor));

/**
 * _constructor - Function to print a message before main function is executed.
 */

void _constructor(void)
{
	printf("You're beat! and y");
	printf("et, you must allow,\nI bore my ho");
	printf("use upon my back!\n");
}
