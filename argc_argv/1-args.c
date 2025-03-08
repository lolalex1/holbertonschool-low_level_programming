#include <stdio.h>

/**
 * main - Prints number of arguments
 * @argc: Argument count
 * @argv: Argument vector (unused)
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
