#include"main.h"

/**
 * _islower(int c) - a function that checks for lowercase character
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' is lowercase otherwise alaways 0 (success)
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
