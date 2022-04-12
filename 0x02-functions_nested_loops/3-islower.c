#include "main.h"

/**
 * _islower - checks if character is lowercase or not
 * @c:  is argument of int type for the function, int for ascii
 * Return: 1 for lowercase characters 0 for anything else
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
