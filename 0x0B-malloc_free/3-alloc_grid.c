
#include "main.h"
#include <stdlib.h>

 /**
  *  * alloc_grid - returns a pointer to a 2 dimensional array of integers.
  *   * @width: width of array
  *    * @height: height of array
  *     *
  *      * Return: a pointer to a 2 dimensional array of integers.
  *       */
 int **alloc_grid(int width, int height)
{
int **a, i, k;
int l = width * height;

if (l <= 0)
return (NULL);

a = (int **)malloc(sizeof(int *) * height);
if (a == NULL)
	return (NULL);
for (i = 0; i < height; i++)
{
	a[i] = (int *)malloc(sizeof(int) * width);
	if (a[i] == NULL)
	{
		for (i--; i >= 0; i--)
		free(a[i]);
		free(a);

		return (NULL);
	}
}
for (i = 0; i < height; i++)
	for (k = 0; k < width; k++)
		a[i][k] = 0;
return (a);
}
