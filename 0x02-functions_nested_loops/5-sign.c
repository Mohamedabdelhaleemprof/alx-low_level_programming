#include "main.h"
/**
 * print_sign - checks for the sign of the number or not
 *  @n : is the number to be checked
 *  Return: 1 if it is positive,-1 if negative otherwise it will be 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
