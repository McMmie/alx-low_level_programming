#include "main.h"

/**
 * print_alphabet -prints lowercase alphabets
 * Return is 0
 */


void print_alphabet(void)
{
	char alp;

	alp = 'a';

	while (alp <= 'z')
 
	{
		_putchar(alp);
		alp++;
	}
	_putchar('\n');
}
