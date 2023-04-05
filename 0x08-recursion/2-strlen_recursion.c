#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 *
 * @s:pointer
 *
 * Return 0
 */

int _strlen_recursion(char *s)
{
	int x = 0;
if (*s)
{
	x++;
	x += _strlen_recursion(s + 1);
}
return (x);
}
