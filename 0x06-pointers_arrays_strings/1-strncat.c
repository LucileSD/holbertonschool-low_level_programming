#include "main.h"
#include <string.h>
/**
*_strncat - concatenates two strings
*@dest: destination
*@src: source
*@n: bytes
*
*Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	for (len = 0; dest[len] != '\0'; len++)
		/** je définie la longueur de ma destination*/
		;

	for (i = 0; i < n && src[i] != '\0'; i++, len++)
		/**mon tableau source ne peut pas contenir + de i que de n*/
	{
		dest[len] = src[i];
		/**pour coller mes 2 tableaux*/
	}

	dest[len] = '\0';
	/** pour terminer par un nul*/

	return (dest);
	/** imprime*/
}
