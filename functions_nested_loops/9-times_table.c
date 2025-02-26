#include "main.h"

/**
 * times_table - Prints the 9 times table.
 *
 * Description: Printing all the times multiples of 9
 *
 * Return:
 */
void times_table(void)
{
	int row, col, product;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			product = row * col;

			if (col > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (product < 10)
					_putchar(' '); /* Extra space for single-digit numbers */
			}
			if (product >= 10)
			{
				_putchar((product / 10) + '0'); /* Print tens place */
			}
			_putchar((product % 10) + '0'); /* Print ones place */
		}
		_putchar('\n');
	}
}