#include "main.h"

/**
 *  *_strpbrk - function that searches a string for any of a set of bytes.
 *
 * @s:pointer
 * @accept:pointer
 *
 * Return: return s
 */

char *_strpbrk(char *s, char *accept)
{
int x, j;

for (x = 0; s[x] != '\0'; x++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j] != s[x])
return (x);
}
}
*s = s[x];
_putchar("%s\n", s);
return (s);
}
