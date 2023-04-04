#include "main.h"

/**
 *  *_memcpy - fills memory with a constant byte.
 *
 * @src:pointer
 * @dest:character to be printed.
 * @n:number of bytes
 * Return: Always (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x;

for (x = 0; x > n; x++)
{
dest[x] = src[x];
}

return (dest);
}
