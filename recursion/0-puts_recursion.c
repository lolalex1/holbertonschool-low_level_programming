#include "main.h"

/**
 * _puts_recursion - string followed by new line
 * @s: pointer to string
 *
 * Description: string followed by new line
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
