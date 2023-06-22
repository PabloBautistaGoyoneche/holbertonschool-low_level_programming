#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char caracter;

	for (caracter = 'a'; caracter <= 'z'; caracter++)

		putchar(caracter);
	putchar ('\n');

	return (0);
}
