#include "variadic_functions.h"

/**
 *print_strings - Prints strings
 *@separator:string
 *@n: number
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
char *a;
unsigned int x;
va_list p;
va_start(p, n);
x = 0;
if (separator == NULL)
separator = "";
for (x = 0; x < n; x++)
{
a = va_arg(p, char*);
if (a == NULL)
	a = "(nil)";
printf("%s", a);
if (x < n - 1)
	printf("%s", separator);
}
va_end(p);
printf("\n");
}
