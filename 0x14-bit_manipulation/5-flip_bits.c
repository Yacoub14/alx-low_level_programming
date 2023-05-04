#include "main.h"

/**
 * flip_bits - function that return the number of bits to change
 * to get from one number to another
 * @n: the first decimal number
 * @m: the second decimal number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, cpt = 0;
	unsigned long int cur;
	unsigned long int exc = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		cur = exc >> i;
		if (cur & 1)
			cpt++;
	}

	return (cpt);
}
