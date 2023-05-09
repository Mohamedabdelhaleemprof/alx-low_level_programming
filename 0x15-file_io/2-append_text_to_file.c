#include "main.h"

/**
 * me - finds the length of a string
 * @a: pointer to the string
 *
 * Return: b
 */
size_t me(char *a)
{
size_t b;
for (b = 0; a[b]; b++)
;
return (b);
}
/**
 * append_text_to_file - appends
 * @filename: name
 * @text_content: string
  * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int c;
ssize_t d;
if (filename == NULL)
return (-1);
c = open(filename, O_WRONLY | O_APPEND);
if (c == -1)
return (-1);
if (text_content != NULL)
d = write(c, text_content, me(text_content));
close(c);
if (d == -1)
return (-1);
return (1);
}
