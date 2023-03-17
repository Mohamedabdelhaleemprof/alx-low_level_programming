#include <stdio.h>

/*
 *main - Entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	printf("size of a char: %lu byte(s)\n", sizeof(char));

	printf("size of an int: %lu byte(s)\n", sizeof(int));

	printf("size of a long int: Xu byte(s)\n", sizeof (long int)); 
	printf("Size of a long long int: lu byte(s) \n", sizeof (long long int)); 
	printf("size of a float: Su byte(s)\n", sizeof(float));
	return (0);
}