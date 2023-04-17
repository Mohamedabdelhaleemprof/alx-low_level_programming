#include "dog.h"

/**
 * init_dog - initialization
 * @d: pointer
 * @name: the name
 * @age: the age
 * @owner: the owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d_>name = name;
d_>age = age;
d_>owner = owner;
}
}
