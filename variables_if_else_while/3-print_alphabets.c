#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char caracter;
	char caracter_m;

	for (caracter = 'a'; caracter <= 'z'; caracter++)
		putchar(caracter);

	for (caracter_m = 'A'; caracter_m <= 'Z'; caracter_m++)
		putchar(caracter_m);
	putchar ('\n');

	return (0);
}
