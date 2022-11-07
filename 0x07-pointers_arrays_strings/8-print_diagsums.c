#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: pointer
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, k = 0, l = 0, m;

	for (; i < size; i++)
	{
		m = (i * size) + i;
		l += *(a + m);
	}

	for (; j < size; j++)
	{
		m = (j * size) + (size - 1 - j);
		k += *(a + m);
	}

}
