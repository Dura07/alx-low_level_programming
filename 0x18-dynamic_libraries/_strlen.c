#include "main.h"

/**
 * _strlen - Calculate the length of a string.
 * @s: A pointer to the first character of the string.
 *
 * Return: The length of the string (excluding the null terminator).
 */

/* _strlen.c */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

