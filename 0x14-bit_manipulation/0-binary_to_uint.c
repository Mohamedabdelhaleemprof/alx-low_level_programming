#include "main.h"

/**
 *  binary_to_uint -conversion
 *   @b: strin
 *    Return: w
 */
unsigned int binary_to_uint(const char *b)
{
int x;
unsigned int w;
w = 0;
if (b == NULL)
return (0);
for (x = 0; b[x] != '\0'; x++)
{
if (b[x] != '0' && b[x] != '1')
return (0);
}
for (x = 0; b[x] != '\0'; x++)
{
w <<= 1;
if (b[x] == '1')
w += 1;
}
return (w);
}
