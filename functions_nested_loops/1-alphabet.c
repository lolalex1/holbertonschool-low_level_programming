#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
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
