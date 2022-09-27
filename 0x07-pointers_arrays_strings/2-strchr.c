#include "main.h"

/**
 * _strchr - search a character
 * @s: a string that gone be search
 * @c: character
 * Return: string
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			s = s + i;
			break;
		}
		i++;
	}
	return (s);
}
