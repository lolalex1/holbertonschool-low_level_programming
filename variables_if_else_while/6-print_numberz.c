#include <stdio.h>

/**
 * main - Single digit numbers from 0 to 10
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num + '0');

	putchar('\n');

	return (0);
}
