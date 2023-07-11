#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#define BUFFSIZE 1024
/**
 * exit_error - prints error message followed by exit number
 * @mesg: error message
 * @exit_code: exit code
 */
void exit_error(const char *mesg, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", mesg);
	exit(exit_code);
}
/**
 * main - copies the files
 * @ac: argument count
 * @av: array of arguments
 * Return: 0
 */
int main(int ac, char *av[])
{
	int fd_from, fd_dest;
	ssize_t bytes_r, bytes_w;
	char buff[BUFFSIZE];
	const char *f_from = av[1];
	const char *f_to = av[2];

	if (ac != 3)
	{
		exit_error("usage: cp file_from file_to", 97);
	}

	fd_from = open(f_from, O_RDONLY);
	if (fd_from == -1)
	{
		exit_error("Error: Can't read from file", 98);
	}

	fd_dest = open(f_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_dest == -1)
	{
		exit_error("Error: Can't write to file", 99);
	}

	while ((bytes_r = read(fd_from, buff, BUFFSIZE)) > 0)
	{
		bytes_w = write(fd_dest, buff, bytes_r);
		if (bytes_w == -1)
		{
			exit_error("Error: Can't write to file", 99);
		}
	}
	if (bytes_r == -1)
	{
		exit_error("Error: Can't read from file", 98);
	}

	if ((close(fd_from) == -1) || (close(fd_dest) == -1))
	{
		exit_error("Error: Can't close file decriptor", 100);
	}

	return (0);
}


