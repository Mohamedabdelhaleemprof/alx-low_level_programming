#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *
 *Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
unsigned int x, y, z;
dog_t *k;

if (name == NULL || owner == NULL)
							return (NULL);
k = malloc(sizeof(dog_t));
if (k == NULL)
	return (NULL);
for (x = 0; name[x]; x++)
		;
x++;
k->name = malloc(x * sizeof(char));
if (k->name == NULL)
{
free(k);
return (NULL);
}
for (z = 0; z < x; z++)
k->name[z] = name[z];
k->age = age;
for (y = 0; owner[y]; y++)
	;
y++;
k->owner = malloc(ol * sizeof(char));
if (k->owner == NULL)
{
free(k->name);
free(k);
return (NULL);
}
for (z = 0; z < y; z++)
dog->owner[i] = owner[i];
return (k);
}
