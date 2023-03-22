#include "main.h"
/**
 *print_alphabet_x10 - print alphabets x10
*/
void print_alphabet_x10(void)
{
char ch;
int i=0;
while (i < 10)
{
char ch = 'a';
while(ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
i++;
}
