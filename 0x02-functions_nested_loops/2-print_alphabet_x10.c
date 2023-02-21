#include "main.h"

/**
 *2-print_alphabet_x10 -  print lowercase alphabets ten times
 * return : 0
 */

void print_alphabet_x10(void)
{
	char alp;
	int count;

	for (count = 1; count <= 10; count++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}


