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
int x, j, i, f=0;;

for (x = 0; s[x] != '\0'; x++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j] == s[x])
{
f = 1;
break;
}
}
if (f = 1)
{
break;
}
}
for (i = 0; s[x] != '\0'; i++)
{
result[i] = s[x++];
}
return (result);
}
