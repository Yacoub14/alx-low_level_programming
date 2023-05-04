#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at an index
 * @n: the decimal number to search
 * @index: the bit’s index
 *
 * Return: the bit’s value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
