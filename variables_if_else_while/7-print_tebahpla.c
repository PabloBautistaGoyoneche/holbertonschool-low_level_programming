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

	for (caracter = 'z'; caracter >= 'a'; caracter--)

		putchar(caracter);
	putchar ('\n');

	return (0);
}
