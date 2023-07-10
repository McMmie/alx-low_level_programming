#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: text to be appended
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t status;
	char *buff;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}

	file = open(filename, O_RDWR | O_APPEND);

	buff = malloc(sizeof(char) * strlen(text_content + 1));
	if (buff == NULL)
	{
		close(file);
		return (-1);
	}
	strcpy(buff, text_content);
	status = write(file, buff, strlen(text_content));
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
