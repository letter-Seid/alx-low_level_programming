#include"main.h"
/**
 * _strncpy - copy string
 * @dest: pointer of char the desitination
 * @src: pointer of char for the source
 * @n: int limit
 * Return: char copied
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		for (; i < n; i++)
			dest[i] = '\0';

	}
	return (dest);
}
