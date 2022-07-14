#include "main.h"
#include <string.h>

/**
 * _strcat - A function that concatenates two strings
 * @dest: first parameter
 * @src: 2nd parameter that is concatenated to the first parameter
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int len1, len2, c;
	char *res = *dest;

	len1 = strlen(*dest);
	len2 = strlen(*src);
	for (c = 0; c <= len2; c++)
	{
		*dest[len1 + c] = *src[c];
	}
	return (*res);
}
