#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *S;

    S = str_concat("Betty ", "Holberton");
    if (S == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", S);
    free(S);
    return (0);
}
