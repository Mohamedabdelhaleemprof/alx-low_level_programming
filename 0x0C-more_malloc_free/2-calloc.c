#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for an array of @nmemb elements of
 * @size bytes each and returns a pointer to the allocated memory.
 *
 * @nmemb: allocate memory for array
 * @size: allocate element of size bytes
 *
 * Return: pointer 
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *a;
unsigned int x;

if (nmemb == 0 || size == 0)
return (NULL);
a = malloc(nmemb * size);
if (a == NULL)
return (NULL);
for (x = 0; x < (nmemb * size); x++)
a[x] = 0;
return (a);
}
