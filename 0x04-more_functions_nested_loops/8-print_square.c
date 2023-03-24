#include "main.h"

/**
 * print_square - draw square
 *
 * @size: number of (#) to be printed
 */

void print_square(int size)
{
	if (size =< 0)
		_putchar('\n');
	else 
	{
		for (size = 1; size <= 10; size++)
		{
			_putchar('#');
		}
	}
	_putchar('\n');
}
