#include "main.h"

/**
 * print_binary - function that prints the binary equivalent of a number
 * @n: the number should print in binary
 */
void print_binary(unsigned long int n)
{
	int jj, cpt = 0;
	unsigned long int c;

	for (jj = 63; jj >= 0; jj--)
	{
		c = n >> jj;

		if (c & 1)
		{
			_putchar('1');
			cpt++;
		}
		else if (cpt)
			_putchar('0');
	}
	if (!cpt)
		_putchar('0');
}