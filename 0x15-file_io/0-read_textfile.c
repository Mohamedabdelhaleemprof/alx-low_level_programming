#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file
 *@filename: the name of the file.
 *@letters: number of letters
 *Return:  NULL - 0 or the count
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t a, b, c;
char *d;
if (filename == NULL)
return (0);
e = malloc(sizeof(char) * letters);
if (e == NULL)
return (0);
a = open(filename, O_RDONLY);
b = read(o, e, letters);
c = write(STDOUT_FILENO, e, b);
if (a == -1 || b == -1 || c == -1 || c != r)
{
free(e);
return (0);
}
free(e);
close(a);
return (c);
}
