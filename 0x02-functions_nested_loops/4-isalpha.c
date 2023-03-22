#include "main.h"
/**
 * _isalpha - checks for if character is alphabet or not
 *@c : is the character to be checked
 *  Return: 1 if it is alphabet,otherwise it will be 0.
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z')) || ((c >= 'A' && c <= 'Z'));
}
