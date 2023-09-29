#include "main.h"

/**
 * _strlen_recursion - calculate the length of a string
 * @S: the string to count
 *
 * Return: integer value
 */
int _strlen_recursion(char *S)
{
	if (*S == '\0')
	{
		return (0);
	}

	S++;
	return (_strlen_recursion(S) + 1);
}
