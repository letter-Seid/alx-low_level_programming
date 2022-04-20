#include "main.h"
/**
 * string_toupper - function changes a str from lower to uppercase
 * @a: pointer
 * Return: retruns changed string
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != 0; i++)
	{
		if (a[i] > 90 && a[i] != 10)
		{
			a[i] = a[i] - 32;
		}
	}

	return (a);

}
