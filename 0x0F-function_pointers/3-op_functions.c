#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *op_add - add
 *@a: int
 *@b: int
 *
 *Return: sum 
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub -subtract
 *@a:int
 *@b:int.
 *
 *Return:subtraction
 *             */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - multiply
 *@a:int
 *@b:int
 *
 *Return:multiply
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - divide
 *@a:int
 *@b:int
 *
 *Return:divide
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod -module
 * @a:int
 * @b:int
 * Return:module
 *             */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}

