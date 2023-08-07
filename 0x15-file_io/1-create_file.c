#include "main.h"
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - a function that creates a file
 * @filename: file to create
 * @text_content: file content
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t status;
	char *buff;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 600);
	if (file == -1)
	{
		return (file);
	}

	buff = malloc(sizeof(char) * strlen(text_content + 1));
	if (buff == NULL)
	{
		close(file);
		return (-1);
	}
	strcpy(buff, text_content);
	status = write(file, buff, (strlen(text_content)));
	if (status == -1)
	{
		close(file);
		free(buff);
		return (-1);
	}

	close(file);
	free(buff);
	return (1);
}
