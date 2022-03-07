#include "dog.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *print_dog -  prints a struct dog
 *@d: the structure
 *Return: None
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
			/*printf("Name: %s\n", d->name ? d->name : "(nil)");*/
		}
		else
		{
			printf("Name: (nil)\n");
		}
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}
