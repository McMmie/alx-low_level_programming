#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int x, y;
	char temp;

	x = 0;
	y = strlen(s) - 1;
	while (x < y)
	{
		temp = s[x];
		s[x] = s[y];
		s[y] = temp;
		x++;
		y--;
	}
}
