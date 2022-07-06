/*
 * File: is the function lowercase or uppercase
 * Auth: HilarySmartt
 */

#include "main.h"

/**
 * _isalpha -check if a character is lowercase or uppercase.
 * @a: The character to be checked.
 * Return: 1 if character is lowercase or uppercase, or otherwise.
 */

int _isalpha(int a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		return (1);
	else
		return (0);
}
