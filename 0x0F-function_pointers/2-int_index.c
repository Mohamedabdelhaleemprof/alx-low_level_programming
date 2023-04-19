#include "function_pointers.h"

/**
 *int_index - index
 *@array: array
 *@size:size
 *@cmp:function
 *Return: 0 or -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
int x = 0;

if (size > 0)
{
	if (array != NULL && cmp != NULL)
	{
		while (i < size)
		{
			if (cmp(array[x]))
				return (x);
			x++;
		}
	}
}
return (-1);
}
