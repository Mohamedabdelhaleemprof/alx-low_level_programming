#include "main.h"
/**
 * _islower(int c) - checks if the char is lowercase character
 *
 * c :  is the char to be checked
 *
 * Return : 1 if char is lowecase ,else 0.	
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}