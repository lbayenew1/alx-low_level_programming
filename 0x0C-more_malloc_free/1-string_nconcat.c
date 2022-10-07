#include "main.h"

/**
 * string_nconcat - add two string
 * @s1: string
 * @s2: string
 * @n: unsigned integer
 * Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1, len2;
	unsigned int i, j;

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	if (n > len2)
	{
		n = len2;
		p = malloc(sizeof(char) * (len1 + n + 1));
	}
	else
		p = malloc(sizeof(char) * (n + len1 + 1));
	if (p == NULL)
		return (NULL);
	for (j = 0; s1[j] != '\0'; j++)
	{
		p[j] = s1[j];
	}
	for (i = 0; i < n; i++)
	{
		p[j] = s2[i];
		j++;
	}
	p[j] = '\0';
	return (p);
}
