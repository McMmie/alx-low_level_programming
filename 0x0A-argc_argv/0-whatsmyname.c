#include <stdio.h>
#include "main.h"

/*
 * main - prints its name
 * if renamed, it will print the new name without compiling it again
 * return : 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
