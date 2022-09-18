#include "main.h"

/**
 * _isalpha - check if it is alphabet or not
 * Descripition : check
 * @c: character
 * Return: 1 if it is alphabet
 */
int _isalpha(int c)
{
	if (c >= 'a' && <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
