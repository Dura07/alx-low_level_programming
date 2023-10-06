#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string
 * @str: the string to duplicat
 *
 * Return: the string duplicated
 */
char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *S;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	S = malloc((sizeof(char) * i) + 1);

	if (S == NULL)
		return (NULL);

	while (a < i)
	{
		S[a] = str[a];
		a++;
	}

	S[a] = '\0';
	return(S);
 }
