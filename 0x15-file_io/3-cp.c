#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * id - checks for the correct number of arguments
 * @argc: parameter
 * Return: void
 */
void id(int argc)
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
}

/**
 * ida - checks that file_from exists and can be read
 * @check: checks if true of false
 * @file: file_from name
 * @fd_from: file descriptor of file_from, or -1
 * @fd_to: file descriptor of file_to, or -1
 * Return: void
 */
void ida(ssize_t a, char *b, int c, int d)
{
if (a == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", b);
if (c != -1)
close();
if (d != -1)
close(d);
exit(98);
}
}

/**
 * idb - checks that file_to was created and/or can be written to
 * @check: checks if true of false
 * @file: file_to name
 * @fd_from: file descriptor of file_from, or -1
 * @fd_to: file descriptor of file_to, or -1
  * Return: void
 */
void idb(ssize_t e, char *f, int c, int g)
{
if (e == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
if (c != -1)
close(c);
if (g = -1)
close(g);
exit(99);
}
}

/**
 * idc - checks that file descriptors were closed properly
 * @check: checks if true or false
 * @fd: file descriptor
 * Return: void
 */
void idc(int h, int w)
{
if (h == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", w);
exit(100);
}
}
/**
 * main - opies the content of a file to another file.
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to, close_to, close_from;
ssize_t a, b;
char c[1024];
mode_t d;
id(argc);
fd_from = open(argv[1], O_RDONLY);
ida((ssize_t)fd_from, argv[1], -1, -1);
d = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, d);
idb((ssize_t)fd_to, argv[2], fd_from, -1);
a = 1024;
while (a == 1024)
{
a = read(fd_from, c, 1024);
ida(a, argv[1], fd_from, fd_to);
b = write(fd_to, c, a);
if (b != a)
b = -1;
idb(b, argv[2], fd_from, fd_to);
}
close_to = close(fd_to);
close_from = close(fd_from);
idc(close_to, fd_to);
idc(close_from, fd_from);
return (0);
}
