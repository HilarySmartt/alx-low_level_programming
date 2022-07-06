/*
 * File: is the function lower case
 * Auth: HilarySmartt
 */

#include "main.h"

/**
 * _islower -check if a character is lowercase.
 * @a: The character to be checked.
 * Return: 1 if character is lowercase, o otherwise.
 */

int _islower(int a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	else
		return (0);

}
