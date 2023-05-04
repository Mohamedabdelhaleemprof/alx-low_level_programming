#include <stdio.h>
#include "main.h"
/**
 * flip_bits - flip bits
 * @n: n
 * @m: m
 * Return: the result
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int a = n ^ m;
unsigned int b = 0;
while (a != 0)
{
b += a & 1;
a >>= 1;
}
return (b);
}
