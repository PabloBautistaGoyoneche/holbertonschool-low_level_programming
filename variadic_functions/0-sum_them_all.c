#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all -  returns the sum of all its parameters
 * @n: first parameter
 * Return: the addition
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int alm = 0;
	unsigned int i;
	int add;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}

	add = 0;
	for (i = 0; i < n; i++)
	{
		alm = va_arg(ap, int);
		add = add + alm;
	}

	va_end(ap);

	return (add);
}
