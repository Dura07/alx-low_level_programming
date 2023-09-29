#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse
 * @S: the string reverse
 *
 * Return: nothing
 */

void _print_rev_recursion(char *S)

{
	if (*S == '\0')
	{
		return;
	}

	S++;
	_print_rev_recursion(S);
	S--;
	_putchar(*S);
}
