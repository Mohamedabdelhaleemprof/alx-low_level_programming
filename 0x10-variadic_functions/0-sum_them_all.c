#include "variadic_functions.h"

/**
 *sum_them_all - sum
 *@n:number passed
 *Return: sum
 */


int sum_them_all(const unsigned int n, ...)
{
unsigned int x, sum = 0;
va_list p;
va_start(p, n);
if (n == 0)
	return (0);
x = 0;
for (x = 0; x < n; x++)
{
sum += va_arg(p, int);
}
va_end(p);
return (sum);
}
