#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: char variable
 *
 * Return: l(success)
 */

int _strlen(char *s)
{
int l = 0;

while (*s != '\0')
{
	l++;
s++;
}
return (l);
}
