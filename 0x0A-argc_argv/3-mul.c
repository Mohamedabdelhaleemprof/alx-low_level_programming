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
int x;

if (argc == 3)
{
x = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", x);
}
else
{
printf("Error\n");
return 1;
}
return (0);
}
