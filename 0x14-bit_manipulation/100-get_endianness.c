#include "main.h"

/**
 * get_endianness - function that checks if a machine is endianness
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *a = (char *) &j;

	return (*a);
}
