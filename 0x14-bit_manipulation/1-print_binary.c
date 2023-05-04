#include "main.h"
/**
 *  me - calculate (base and power)
 *   @a: a
 *    @b: b
 *     Return: c
 */
unsigned long int me(unsigned int a, unsigned int b)
{
unsigned long int c;
unsigned int d;
c = 1;
for (d = 1; d <= b; d++)
c *= a;
return (c);
}
/**
 *  print_binary - prints the binary 
 *   @n: num
 *    Return: void
 */
void print_binary(unsigned long int n)
{
unsigned long int e, f;
char j;
j = 0;
e = me(2, sizeof(unsigned long int) * 8 - 1);
while (e != 0)
{
f = n & e;
if (f == e)
{
j = 1;
_putchar('1');
}
else if (j == 1 || e == 1)
{
_putchar('0');
}
e >>= 1;
}
}
