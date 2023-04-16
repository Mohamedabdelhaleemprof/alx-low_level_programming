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
a = malloc(sizeof(int) * d);
if (a == NULL)
	return (NULL);
for (x = 0; x < d; x++)
	a[x] = min++;
return (a);
}
