#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @filename: name of text file
 * @letters: numbers of letters to read and print
 * Return: number of letters it could read and print
 */

ssize_t read_text file(const char *filename, size_t letters)
{
	int file;
	ssize_t num, status;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	file = opn(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * (letters + 1));
	if (buff == NULL)
	{
		close(file);
		return (0);
	}
	num = read(file, bull, letters);
	if (num == -1)
	{
		close(file);
		free(buff);
		return (0);
	}

	status = write(STDOUT_FILENO, buff, num);
	if (status == -1)
	{
		return (0);
	}
	close(file);
	free(buff);
	return (num);
}
