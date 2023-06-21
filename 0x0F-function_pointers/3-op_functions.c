#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - performs addition
 * @a: integer
 * @b: integer
 *
 * Return: 0 on success
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - performs subtraction
 * @a: integer
 * @b: integer
 *
 * Return: 0 on success
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - performs multiplication
 * @a: integer
 * @b: integer
 *
 * Return: 0 on success
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - performs division
 * @a: integer
 * @b: integer
 *
 * Return: 0 on success
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - performs modulus
 * @a: integer
 * @b: integer
 *
 * Return: 0 on success
 */

int op_mod(int a, int b)
{
	return (a % b);
}
