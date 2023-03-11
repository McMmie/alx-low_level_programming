#include "main.h"
#include <stdio.h>
/**
 * _strstr - Returns a pointer to the first occurrence of str2 in str1,
 * or a null pointer if str2 is not part of str1.
 * @haystack: string
 * @needle: pointer
 * Return: pointer
 */


char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] > '\0'; i++)
{
	for (j = i; haystack[j] > '\0' && needle[j - i] > '\0'; j++)
	{
		if (haystack[j] != needle[j - i])
		{
			break;
		}
	}
	if (needle[j - i] == '\0')
	{
		return (haystack + i);
	}
}
return (0);
}
