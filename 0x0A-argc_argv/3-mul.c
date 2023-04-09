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
int x;
if (argc == 3)
{
printf("error\n");
return 1;
}
else
{
x = atoi(argv[1]) * atoi(argv[2];
printf("%d\n", x); 
}
return (0);
}
