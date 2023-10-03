#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: the size of the array
 * @C: the char to fill in the array
 *
 * Return: the array filled
 */

char *create_array(unsigned int size, char C)
{
	unsigned int i;
	char *S;

	if (size == 0)
		return (NULL);

	S = malloc(size * sizeof(char));

	if (S == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
