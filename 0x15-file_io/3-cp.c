#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * a97 - check
 * @a: 
 *
 * Return: void
 */
void a97(int a)
{
	if (a != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * a98 - check
 * @b: b
 * @c: file
 * @d: file descriptor
 * @e: file descriptor
 *
 * Return: void
 */
void a98(ssize_t b, char *c, int d, int e)
{
	if (b == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", c);
		if (d != -1)
			close(d);
		if (e != -1)
			close(e);
		exit(98);
	}
}

/**
 * a99 - check
 * @f: check
 * @g: name
 * @h: file descriptor
 * @j: file descriptor
 *
 * Return: void
 */
void a99(ssize_t f, char *g, int h, int j)
{
	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", g);
		if (h != -1)
			close(h);
		if (j != -1)
			close(j);
		exit(99);
	}
}

/**
 * a100 - check
 * @k: check
 * @l: file descriptor
 *
 * Return: void
 */
void a100(int k, int l)
{
	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", l);		
exit(100);
	}
}
/**
 * main - copies
 * @argc: number
 * @argv: array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int m, n, p, o;
	ssize_t q, r;
	char s[1024];
	mode_t t;

	a97(argc);
	m = open(argv[1], O_RDONLY);
	a98((ssize_t)m, argv[1], -1, -1);
	t = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	n = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, t);
	a99((ssize_t)n, argv[2], m, -1);
	q = 1024;
	while (q == 1024)
	{
		q = read(m, s, 1024);
		a98(q, argv[1], m, n);
		r = write(n, s, q);
		if (r != q)
			r = -1;
		a99(r, argv[2], m, n);
	}
	p = close(n);
	o = close(m);
	a100(p, n);
	a100(o, m);
	return (0);
}
