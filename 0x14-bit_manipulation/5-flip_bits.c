#include "main.h"
/**
 * flip_bits - flip
 * @n: n
 * @m: m
 * Return: bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int a, b;
unsigned int c, d;
c = 0;
b = 1;
a = n ^ m;
for (d = 0; d < (sizeof(unsigned long int) * 8); d++)
{
if (b == (a & b))
c++;
b <<= 1;
}
return (c);
}
