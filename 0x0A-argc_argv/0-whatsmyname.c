#include <stdio.h>
/**
 * main - print its name, followed by a new line
 *
 * @argc: number of command line arguments
 * @argv: array that contain the command line arg..
 *
 * Return: (0) always successful
 */
int main(int agrc __attribute__((unused)), char *argv[])
{

	printf("%s\n", argv[0]);
	return (0);
}
