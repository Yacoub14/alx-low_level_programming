#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to the first element of the array
 * @n: number of elements to print
 *
 * Return: void
 */

void print_array(int *a, int n)
{
int i;
if (n <= 0)
return;
printf("%d", a[0]);
for (i = 1; i < n; i++)
printf(", %d", a[i]);
printf("\n");
}
