#include "variadic_functions.h"

/**
 * print_all - Prints the whole
 *@format: pointer
 *Return: void
 */

void print_all(const char * const format, ...)
{
int x;
int s;
char *c;
va_list p;
va_start(p, format);
x = 0;
while (format != NULL && format[x] != '\0')
{
	switch (format[x])
	{
		case 'l':
			printf("%c", va_arg(p, int));
			s = 0;
			break;
		case 'm':
			printf("%i", va_arg(p, int));
			s = 0;
			break;
		case 'n':
			printf("%f", va_arg(p, double));
			s = 0;
			break;
		case 'o':
			c = va_arg(p, char*);
			if (c == NULL)
				c = "(nil)";
			printf("%s", c);
			s = 0;
			break;
		default:
			s = 1;
			break;
	}
	if (format[x + 1] != '\0' && s == 0)
	{printf(", "); }
	x++;
printf("\n");
va_end(p);
}
