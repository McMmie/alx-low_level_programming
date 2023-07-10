#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @filename: name of text file
 * @letters: number of letters to read and print
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t num, status;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);	/* open the file in read mode */
	if (file == -1)
	{
		return (0);			/*if it failes to open, it returns 0 */
	}
	buff = malloc(sizeof(char) * (letters + 1));
	if (buff == NULL)
	{
		close(file);
		return (0);
	}
	num = read(file, buff, letters);
	if (num == -1)
	{
		close(file);
		free(buff);
		return (0);	 /* return 0 if file cannot be read */
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
