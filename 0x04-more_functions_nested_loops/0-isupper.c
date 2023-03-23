#include "main.h"

/**
 * _isupper - determines if c is uppercase or otherwise
 *
 *@c : the character to be determined
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
