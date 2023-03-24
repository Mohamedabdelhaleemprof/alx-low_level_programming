#include "main.h"

/**
 * print_diagonal - draw diagonal line
 *
 * @n: number of ( \ ) to be printed
 */

void print_diagonal(int n)
{
	int x, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (space = 1; space <= x; space++)
				_putchar(' ');
			_putchar('92');
			_putchar('\n');
		}
	}
}