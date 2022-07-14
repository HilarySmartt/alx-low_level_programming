#include "main.h"
#include <string.h>

/**
 * *_strcat - A function that concatenates two strings
 * @dest: first parameter
 * @src: 2nd parameter that is concatenated to the first parameter
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int len1 = 0;
	int index;
	char *res = dest;

	while (dest[index++])
		len1++;
	for (index = 0; src[index]; index++)
		dest[len1++] = src[index];

	return (*res);
}
