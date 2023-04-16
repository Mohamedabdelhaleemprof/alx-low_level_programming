#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - cause normal process termination with a status value of 98
 *
 * @b: allocated memory
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
int *x;
x = malloc(b);

if (x == NULL)
exit(98);
return (x);
}
