#include "main.h"

/**
 *  _sqrt_recursion - function thatreturns the natural square root of a number.
 *
 * @n:integer
 *
 * @x: variable
 * Return: Result
 */

int _sqrt_recursion(int n, int x)
{
if (x * x > n)
return (-1);
if (x * x == n)
return (1);
return (_sqrt_recursion(n, x + 1));
}
