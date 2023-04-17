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
d->name = name;
d->age = age;
d->owner = owner;
}
}
