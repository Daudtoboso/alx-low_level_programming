#include "main.h"

/**
*_strspn - function that counts ocurrences of first segment with accepted char
*@s: string of input
*@accept: characters that should compare with s
*Return: length of the ocurrrences with the first segment
*/

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int length = 0;

	while (*s != ' ')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s != ' ')
			{
				if (accept[i] == *s)
				{
					length++;
				}
			}

		}
		s++;
	}
	return (length);
}
