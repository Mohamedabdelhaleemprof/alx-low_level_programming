#include "main.h"

/**
 * *_strstr - function that searches a string for any of a set of bytes.
 *
 * @haystack:pointer
 * @needle:pointer
 *
 * Return: Result
 */

char *_strstr(char *haystack, char *needle)
{
int i, j;
char *p;
i = 0;

while (haystack[i] != '0')
{
j = 0;
if (needle[j] == haystack[i])
{
p = &haystack[i];
return (p);
}
else
{
i++;
}
}
return (0);
}
