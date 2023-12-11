#include "main.h"

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	char str[] = "Hello, Dynamic Library!";
	int len;


	_puts("Using _puts function from the dynamic library:");
	_puts(str);

	len = _strlen(str);
	_puts("\nUsing _strlen function from the dynamic library:");
	printf("Length of the string: %d\n", len);

	return (0);
}

