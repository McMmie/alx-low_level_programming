#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int h, i, j, k, n;

	j = strlen(s1);
	k = strlen(s2);
	n = (j + k);
	ptr = (char *)malloc(n * sizeof(char));

	if (ptr == NULL)
	{
		printf("memory not allocated");
		return (NULL);
	}
	/*for (i = 0; s2[i] != '\0'; i++)
	{
		s1[i + j] = s2[i];
	}
	s1[i + j] = '\0';*/
	i = 0;
	while (i < j)
	{
		h = 0;
		while (h <= k)
		{
			*(ptr + (i + h)) = *(s2 + (h - 1));
			h++;
			
		}
		*(ptr + i) = *(s1 + i);
		i++;
	}
	return (ptr);
}
