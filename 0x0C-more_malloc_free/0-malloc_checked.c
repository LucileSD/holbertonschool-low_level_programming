#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *malloc_checked - allocates memory using malloc
 *@b: index
 *Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr = NULL;
	
	ptr = (unsigned int *)malloc(b);
	if (ptr == NULL)
	{
		free(ptr);
		exit (98);
	}

	return(ptr);
}
