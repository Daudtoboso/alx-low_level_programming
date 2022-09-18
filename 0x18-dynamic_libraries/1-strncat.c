#include "main.h"

/**
**_strncat - function tha concatenates two strings
* @dest : place where append the src string
* @src: place of the string for append
* @n: n is number until print src
* Return: pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = _strlen(dest);

	for (i = 0; src[i] != src[n]; i++, len++)
	{
		dest[len] = src[i];
	}

	return (dest);
}

