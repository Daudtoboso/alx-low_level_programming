#include "main.h"

/**
**_strstr - function that counts ocurrences of first segment with accepted char
*@haystack: string of input
*@needle: characters that should compare with s
*Return: the string with coincidences
*/

char *_strstr(char *haystack, char *needle)
{
	int a = 0;
	int b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
			b++;
		}
		if (needle[b] == '\0')
		{
			return (haystack + a);
		}
		a++;
	}
	return ('\0');
}
