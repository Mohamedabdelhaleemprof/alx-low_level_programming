#include "main.h"

/**
 * clear_bit - bit
 * @n: n
 * @index: index
 * Return: 1 , or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int a;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
a = ~(1 << index);
*n = *n & a;
return (1);
}
