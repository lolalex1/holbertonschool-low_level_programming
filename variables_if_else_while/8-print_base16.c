#include <stdio.h>

/**
 * main - Printing base of number 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);

	for (num ='a'; num <= 'f'; num++)
		putchar(num);

	putchar('\n');

	return (0);
}
