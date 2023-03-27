nclude "main.h"

/**
 * swap_int - swap the a pointer with the p pointer
 *
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
int m;
m = *a;
*a = *b;
*b = m;
}
