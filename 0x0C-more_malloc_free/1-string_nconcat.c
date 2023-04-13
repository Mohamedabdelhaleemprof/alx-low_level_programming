#include "main.h"

 /**
  * string_nconcat - a function that concatenates two strings.
  *
  * @s1: first char
  * @s2: secound char
  * @n: unsigned int
  *
  * Return: If the function fails, it should return NULL
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int x, y, z, e;
char *a;

if (s1 == NULL)
{
	s1 = "";
}
if (s2 == NULL)
{
	s2 = "";
}
for (x = 0; s1[x] != '\0'; x++)
	;
for (y = 0; s2[y] != '\0'; ++y)
	;
a = malloc(sizeof(char) * (x + n + 1));
if (a == NULL)
	return (NULL);
for (z = 0; s1[z] != '\0'; z++)
	a[z] = s1[z];
for (e = 0; e < n; e++)
	a[z] = s2[e];
	z++;
a[z] = '\0';
return (a);
}
