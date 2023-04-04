#include "main.h"

/**
 *  _strspn -  function that gets the length of a prefix substring.
 *
 * @s:pointer
 * @accept:pointer
 *
 * Return: return x
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int x, j;

for (x = 0; s[x] != '\0'; x++)
{
for (j = 0; accept[j] != s[x]; j++)
{
if (accept[j] == '\0')
return (x);
}
}
return (x);
}
