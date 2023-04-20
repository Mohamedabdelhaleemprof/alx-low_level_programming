#include "variadic_functions.h"

/**
 *print_numbers - prints numbers followed by a new line
 *@n: number
 * @separator: separator
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int x;
va_list p;
va_start(p, n);
if (separator == NULL)
	separator = "";
x = 0;
for (x = 0; x < n; x++)
{
	printf("%d", va_arg(p, int));
	if (x < n - 1)
		printf("%s", separator);
}
printf("\n");
va_end(p);
}

