#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 *
 * Return: sum of its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, j, sum = 0;

	/*declaring a pointer to the argument list*/
	va_list arg;

	j = n;
	va_start(arg, n); /*initializing arguments to the list*/
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < j; i++)
	{
		sum += va_arg(arg, const unsigned int);
	}
	va_end(arg); /*end list traversal*/

	return (sum);
}
