#include <stdio.h>
/**
 *main-print lower case aphabets.
 *
 *Description : return value of 'main' is Return.
 *
 * Return:Always 0(Success)
*/
int main(void)
{
char alp[16] = "0123456789abcdef";
int i;
for (i = 0; i < 16; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}
