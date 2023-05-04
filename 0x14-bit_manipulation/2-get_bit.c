#include "main.h"
#include <stdio.h>
/**
 *get_bit - get bit
 *@n: n
 *@index: index
 * Return: result
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8) {
return -1;
}
return (n >> index) & 1;
}
