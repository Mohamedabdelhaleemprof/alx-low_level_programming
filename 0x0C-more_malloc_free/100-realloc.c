#include "main.h"

/**
 *  _realloc - reallocation
 *   @ptr: ptr
 *    @old_size: old size
 *     @new_size: new size
 *      Return: null or reserved
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *s;
unsigned int x, t = new_size;
char *w = ptr;
if (ptr == NULL)
{
s = malloc(new_size);
return (s);
}
else if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (new_size == old_size)
return (ptr);
s = malloc(new_size);
if (s == NULL)
return (NULL);
if (new_size > old_size)
t = old_size;
for (x = 0; x < t; x++)
s[x] = w[x];
free(ptr);
return (s);
}
