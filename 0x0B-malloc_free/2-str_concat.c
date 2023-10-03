#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * Str_Concat - concatenates two strings of any size
 * @S1: the first string to concatenate
 * @S2: the second string to concatenate
 *
 * Return: the two strings concatenated
 */

char *Str_Concat(char *S1, char *S2)

{
	int i = 0, j = 0, k = 0, l = 0;
	char *S;

	if (S1 == NULL)
		S1 = "";

	if (S2 == NULL)
		S2 = "";

	while (S1[i])
		i++;

	while (S2[j])
		j++;

	l = i = j;
	S = malloc((sizeof(char) * l) + 1);

	if (S == NULL)
		return (NULL);

	j = 0;

	while (k <= i)
	{
	if (k <= i)
	S[k] = S1[k];

	if (k >= i)
	{
		S[k] = S2[j];
		j++;

	}

	k++;
	}

	S[k] = '\0';
	return (S);
}
