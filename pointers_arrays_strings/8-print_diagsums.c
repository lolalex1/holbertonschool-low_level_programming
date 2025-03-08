#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - printing the sum of two diagonals of a sqaure matrix
 * @a: pointer to first element
 * @size: maxtrix size
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum1, sum2);
}
