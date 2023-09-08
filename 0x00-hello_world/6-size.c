#include <stdio.h>
/**
* main - Entry point
*
* Return 0 (Success)
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of a int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(lonf long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
