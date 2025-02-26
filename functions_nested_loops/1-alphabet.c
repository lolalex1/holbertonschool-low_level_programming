#include "main.h"

/**
 * print_alphabet - Printing the alphabet in lowercase.
 *
 * Description: Prints all lowercase letters of the alphabet.
 */
void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (alphabet[i] != '\0')
	{
		_putchar(alphabet[i]);
		i++;
	}
	_putchar('\n');
}
