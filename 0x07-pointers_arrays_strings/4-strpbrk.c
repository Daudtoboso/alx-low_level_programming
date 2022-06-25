#include "main.h"
#include <stddef.h>

int in_accept(char c, char *accept);

/**
 * _strpbrk - search for  a string for any of a set of bytes
 * @s: string to be checked
 * @accept: string containing the only accepted bytes
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * NULL if no similar byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	char *first = NULL;

	for (i = 0;  s[i] != '\0'; i++)
	{
		if (in_accept(s[i], accept))
		{
			first = (s + i);
			break;
		}
	}

	return (first);
}


/**
 * in_accept - checks if a given character is in the string accept
 * @c: character to be checked
 * @accept: string containing the only accepted characters
 *
 * Return: 1 if c is in accept. Otherwise 0
 */
int in_accept(char c, char *accept)
{
	int i;

	for (i = 0; accept[i] != '\0'; i++)
	{
		if (c == accept[i])
			return (1);
	}

	return (0);
}
