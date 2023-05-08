#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0
 * @n: pointer that points to the decimal number to change
 * @index: the bit’indexe
 *
 * Return: 1 for success, return -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}