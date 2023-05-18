#include <string.h>
#include <unistd.h>
#include <stdio.h>

/**
 * main - prints to stderr
 *
 * Return: 1 (success)
 */

int main(void)
{
	char buf[] = "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n";

	write(2, buf, 59);
	return (1);
}
