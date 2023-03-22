#include "main.h"
/**
 * _islower - checks if the char is lowercase character
 *
 *@c : is the char to be checked
 *
 * Return: 1 if char is lowecase ,otherwise 0.
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
