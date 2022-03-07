#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *new_dog - creates a new dog
 *@name: the name of the dog
 *@age: the age of the dog
 *@owner: the owner of the dog
 *Return: None
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = NULL;
	char *new_name, *new_owner;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	if (d != NULL)
	{
		new_name = _strdup(name);
		if (new_name == NULL)
		{
			free(d);
			return (NULL);
		}
		d->name = new_name;
		d->age = age;
		new_owner = _strdup(owner);
		if (new_owner == NULL)
		{
			free(d->name);
			free(d);
			return (NULL);
		}
		d->owner = new_owner;
	}
	return (d);
}

/**
 *_strdup -  returns a pointer to a newly allocated space in memory,
 *which contains a copy of the string given as a parameter
 *@str: the string
 *Return: the pointer
 */
char *_strdup(char *str)
{
	int i;
	char *dest;
	int size;

	if (str == NULL)
	{
		return (NULL);
	}

	size = _strlen(str);
	dest = (char *)malloc((size + 1) * sizeof(char));

	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		dest[i] = str[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 *_strlen - returns the length of a string
 *@s: the pointer for the lenght
 *
 *Return: 0
 */
int _strlen(char *s)
{
	int p = 0;

	while (s[p] != '\0')
	{
		p++;
	}
	return (p);
}
