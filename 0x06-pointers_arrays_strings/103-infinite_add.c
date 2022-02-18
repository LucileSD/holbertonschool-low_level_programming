#include "main.h"
/**
 *
 *
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, ret;

	for (i = 0; n1[i] != '\0'; i++)
		;
	for (j = 0; n2[j] != '\0'; j++)
		;
	for ( ; r[size_r] >= '\0'; size_r++)
		if(size_r > 9)
			ret = 1;
	r[size_r] = i + j + ret;
		
	return (r);
}
