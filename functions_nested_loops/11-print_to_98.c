#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Printing all numbers from value to 98.
 *
 * Description: Function to print all numbers from given number to flat 98.
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
			n++;
		else
			n--;
	}
	printf("98\n");
}
