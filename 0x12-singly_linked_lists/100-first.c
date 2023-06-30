#include <stdio.h>

/**
 * print - prints before main
 *
 * Return: nothing
 */

void __attribute__((constructor)) print()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
