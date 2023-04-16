#include "main.h"
#include <stdlib.h>

int *array_range(int min, int max)
{
int *a;
int d = (max - min) + 1

if (min > max)
	return (NULL);
a = malloc(d * sizeof(int));
if (a == NULL )
	return (NULL);
else if (min < max)
int x;
for (x = 0; x < d; x++)
	a[x] = min++;
return (a);
}
