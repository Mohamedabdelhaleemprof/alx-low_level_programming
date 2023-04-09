#include "main.h"

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
int x = 0;
while (argc--)
{
printf("%s\n", argv[x]);
x++;
}
return (0);
}
