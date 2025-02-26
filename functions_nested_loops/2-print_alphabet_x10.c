#include "main.h"

/**
 * print_alphabet_x10 - Printing the alphabet 10 times
 *
 * Description: Printing all lowercase letters of alphabet x10.
 */
void print_alphabet_x10(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0, z;

	while (i < 10)
	{
		z = 0;
		while (alphabet[z] != '\0')
		{
			_putchar(alphabet[z]);
			z++;
		}
		i++;
	}
}
