#include "main.h"

/**
 * _abs - prints absolute value of an integer
 * @n:  argument to be evaluated
 * Return: integer result
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
