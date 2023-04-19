#include "function_pointers.h"

/**
 * array_iterator - a function applied on elemnts of array
 *
 * @array: array
 * @size: size
 * @action:  pointer
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t x;
if (array != NULL && action != NULL)
{
x = 0;
while (x < size)
{
action(array[x]);
x++;
}
}
}
