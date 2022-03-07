#include "dog.h"
#include <stddef.h>
/**
 *init_dog - initialize a variable of type struct dog
 *@d: the structure
 *@name: the name of the dog
 *@age: age of the dog
 *@owner: the owner of the dog
 *Return: NONE
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
