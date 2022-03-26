#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 0;
	char *c = (char *)&x;

	if (*c == 0x10)
		return (0);
	else
		return (1);
	;
}
