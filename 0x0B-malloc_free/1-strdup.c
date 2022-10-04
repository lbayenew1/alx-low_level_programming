#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - return pointer that contain duplicate string
 * @str: string
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *s;
	int i, len;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	len = len + 1;
	s = malloc(len * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
