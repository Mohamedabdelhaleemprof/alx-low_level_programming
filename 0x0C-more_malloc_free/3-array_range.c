#include "main.h"
#include <stdlib.h>

int *array_range(int min, int max)
{
int *a;
int d = (max - min) + 1

if (min > max)
	return (null);
a = malloc(d * sizeof(int));
if (a == null)
	return (null);
else if (min < max)
int x;
for (x = 0; x < d; x++)
	a[x] = min++;
return (a);
}