#include "main.h"

/**
 * set_bit - sets a the value of bit at a an index to 1
 * @n: pointer that points to the number to change
 * @index: the bit’s indexe
 *
 * Return: 1 for success,return: -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}