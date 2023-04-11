#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
char *s;
int i, x = 0;

if (str == NULL)
return (NULL);

while (str[x] != '\0')
x++;
s = (char *)malloc((sizeof(char) * x) + 1);
if (s == NULL)
return (NULL);
for (i = 0; i < x; i++)
s[i] = str[i];
s[x] = '\0';
return (s);
}
