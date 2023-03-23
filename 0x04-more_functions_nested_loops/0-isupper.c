#include "main.h"

/**
 * _isupper - determines if c is uppercase or otherwise
 *
 * Description : return value of 'main' is Return.
 *
 * Return: 1 if c is upper case ,otherwise 0
 */

int _isupper(int c)
{
	 if (c >= "A" && c <= "Z")
		return (1);
	else
		return (0);
}
