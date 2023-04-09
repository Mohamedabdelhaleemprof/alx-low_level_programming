#include "main.h"
#include <stdlib.h>
/**
 * main - locates a substring
 *
 *@argc:count of strings
 *@argv: the string name
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
intt x = 0;
char *c;
while (--argc)
{
for (c = argv[argc]; *c; c++)
{
if (*c < '0' || *c > '9')
{
return (printf("Error\n"), 1);
}
}
x += atoi(argv[argc]);
}
printf("%d\n", x);
return (0);
}
