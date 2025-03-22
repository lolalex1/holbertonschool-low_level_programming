#include <stdio.h>

/**
 * print_name - Prints a name using a given function pointer
 * @name: The name to print
 * @f: A pointer to a function that prints a string
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

