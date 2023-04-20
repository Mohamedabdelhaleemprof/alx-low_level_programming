#include "variadic_functions.h"

/**
 *print_numbers - prints numbers followed by a new line
 *@n: number
 * @separator: separator
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
int x;
va_list p;
if (separator != NULL)
        {
	        va_start(p, n);
	        x = 0;
	        for (x =0; x < n; x++)
	        {
		        printf("%d%s",va_arg(p, int),separator);
		}
		printf("\n");
		va_end(p);
	}
}
