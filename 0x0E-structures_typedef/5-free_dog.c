#include "dog.h"
#include <stdlib.h>

/*free_dog - frees dog
* @d: pointer
*Return: void
*/
void free_dog(dog_t *d)
{
		if (d != NULL)
		{
		free(d);
		free(d->owner);
		free(d->name);
		}
}
