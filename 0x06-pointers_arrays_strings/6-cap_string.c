#include "main.h"

/**
 * cap_string - capitalizes every word
 * @s: string
 *
 * Return: character
 */

char *cap_string(char *s)
{
	char *ptr;
	int i;
	ptr = s;
	
	while (*s)
	{
		i = 0;
		while ((s[i] >= 'a' && s[i] <= 'z') && ((s[i - 1]) >= ' ' && (s[i - 1]) <= '"'))
		{
			while ((s[i -1] == ',') && (s[i -1] == ';') && (s[i -1] == '?') && (s[i -1] == '.') && (s[i -1] == '.'))
			{
				while ((s[i - 1] == '\n') && (s[i - 1] == '\t') && (s[i -1] == '(') && (s[i -1] == ')') && (s[i -1] == '{') && (s[i -1] == '}'))
				{
				s[i] = s[i] - 'a' + 'A';
				s++;
				i++;
				}
			       s[i] = s[i] - 'a' + 'A';
			       s++;
			       i++;
			}	       
			 s[i] = s[i] - 'a' + 'A';
			s++;
			i++;
		}
		s++;
	}
	return (ptr);
}

