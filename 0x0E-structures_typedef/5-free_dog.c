#include "dog.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *free_dog - frees dogs
 *@d: the pointer on dog_t
 *Return: None
 */
void free_dog(dog_t *d)
{
	free(d);
}
