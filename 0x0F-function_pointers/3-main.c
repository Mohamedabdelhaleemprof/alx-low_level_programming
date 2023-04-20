#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - calculator
 * @argc:count
 * @argv:value
 *
 * Return:0
 */
int main(int argc, char *argv[])
{
int (*x)(int, int);

if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}
	x = get_op_func(argv[2]);
if (x == NULL)
	{
	printf("Error\n");
	exit(99);
	}
printf("%d\n", x(atoi(argv[1]), atoi(argv[3])));
return (0);
}
