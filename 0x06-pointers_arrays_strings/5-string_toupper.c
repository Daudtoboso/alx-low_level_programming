#include "main.h"

/**
* string_toupper - converts all lowercase letters to uppercase letters
* @str: string to be converted
*
* Return: pointer to converted uppercase string
*/
char *string_toupper(char *str)
{
	char *new_str = str;

	while (*str)
	{
		/* only convert lowercase characters */
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;

		str++;
	}

	return (new_str);
}
