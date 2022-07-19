#include "main.h"

/**
 * _strstr -  a function that locates a substring.
 * It finds the first occurrence of the substring needle in the string
 * haystack. The terminating null bytes (\0) are not compared. It returns
 * a pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 *
 * @haystack: string parameter aka source
 * @needle: substring parameter
 *
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
