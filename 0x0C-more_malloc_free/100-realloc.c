#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: the pointer to the memory previously
 *allocated
 *@old_size: the size il bytes of the allocated
 *space for ptr
 *@new_size: the size of the new memory block
 *Return: None
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr = NULL;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		free(new_ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		_memcpy(new_ptr, ptr, old_size);
	}
	if (ptr = NULL)
	{
		_memcpy(new_ptr, ptr, new_size);
	}
	free(ptr);
	return (new_ptr);
}
#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: destination
 *@src: source
 *@n: number of bytes
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
