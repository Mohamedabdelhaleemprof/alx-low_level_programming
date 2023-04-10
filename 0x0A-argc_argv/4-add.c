#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int k, w, s = 0;
	char *a;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (k = 1; argv[k]; k++)
	{
		w = strtol(argv[k], &a, 10);
		if (*a)
		{
																printf("Error\n");
																return (1);
		}
		else
		{
			s += w;
		}
	}
	printf("%d\n", s);
	return (0);
}
