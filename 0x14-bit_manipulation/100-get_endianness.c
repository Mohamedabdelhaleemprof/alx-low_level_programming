#include "main.h"
/**
 * get_endianness - endianness
 *
 * Return: 0 , 1
 */
int get_endianness(void)
{
int a;
char *b;
a = 1;
b = (char *)&a;
return (*b);
}
