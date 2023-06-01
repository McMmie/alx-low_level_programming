#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: always 0
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	while (*s1 != '\0')
	{
		i = 0, j = 0;
		if (s1[i] > s2[j])
		{
			return (s1[i] - s2[j]);
		}
		else if (s1[i] < s2[j])
		{
			return (s1[i] - s2[j]);
		}
		else
		{
		return (0);
		}
		s1++;
		s2++;
	}
	return (0);
}
