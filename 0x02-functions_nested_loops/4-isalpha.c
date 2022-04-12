#include "main.h"

/**
 * _isalpha - checks if character is alphabetic or not
 * @c:  is argument of int type for the function
 * Return: 1 for alphabetic characters 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
