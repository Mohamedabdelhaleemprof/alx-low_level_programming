#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 *
 * @s:pointer
 * @b:character to be printed.
 * @n:number of bytes
 * Return: Always (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;

for (x = 0; n > 0; x++; n--)
{
s[x] = b;
}

return (s);
}
