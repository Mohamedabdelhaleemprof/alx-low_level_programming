#include "main.h"
#include <stdlib.h>

/**
 *array_range - function that creates an array of integers.
 *@min:minimum
 *@max:maximum
 *Return: a
 */

int *array_range(int min, int max)
{
int *a;
int d = (max - min) + 1;
int x;

if (min > max)
	return (NULL);
a = malloc(d * sizeof(int));
if (a == NULL)
	return (NULL);
else if (min < max)
for (x = 0; x < d; x++)
	a[x] = min++;
return (a);
}
