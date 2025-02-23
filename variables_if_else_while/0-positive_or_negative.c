#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assigns a random number to n and prints whether it's positive, zero, or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is a positive\n", n);
	else if (n == 0)
		printf("%d is equal to zero\n", n);
	else
		printf("%d is a negative\n", n);

	return(0);
}
