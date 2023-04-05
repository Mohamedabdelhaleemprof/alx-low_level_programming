#include "main.h"

/**
 * *_strstr - function that locates a substring.
 *
 * @haystack:pointer
 * @needle:pointer
 *
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
int i;
char *p;
i = 0;

while (haystack[i] != '\0')
{;
	if (needle[0] == haystack[i])
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
