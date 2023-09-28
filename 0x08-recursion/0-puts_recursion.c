#include "main.h"

/**
 * _puts_recursion - print a string followed by a new line
 * @S: the string to print
 *
 * Return: nothing.
 */

void _puts_recursion(char *S)
{
	if (*S == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*S);
	S++;
	_puts_recursion(S);
}
