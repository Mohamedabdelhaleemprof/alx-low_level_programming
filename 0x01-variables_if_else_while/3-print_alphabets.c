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
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; i < 52; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}
