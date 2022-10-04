#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concate two string
 * @s1: string
 * @s2: string
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int len1, len2, len, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len1 = len1 + 1;
	len2 = strlen(s2);
	len2 = len2 + 1;
	len = len1 + len2;
	s = malloc(len * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	strcat(s, s2);
	return (s);
}
