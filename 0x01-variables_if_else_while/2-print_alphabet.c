#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - detect random last numbers
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
		printf("Last digit of %d is greater than 5\n", n);
	else if (n == 0)
		printf("Last digit of %d is zero\n", n);
	else (n < 6 & n !=0)
		printf("Last digit of %d is less than 6 and not zero\n", n);
	return (0);
}
