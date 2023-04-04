#include "main.h"

/**
 *  *_strchr -  memory with a constant byte.
 *
 * @s:pointer
 * @c:character to be printed.
 *
 * Return: return s+x otherwise return null
 */

char *_strchr(char *s, char c)
{
int x;

for (x = 0; s[x] >= '\0'; x++)
{
if (s[x] == c)
return (s + x);
}
return ('\0');
}
