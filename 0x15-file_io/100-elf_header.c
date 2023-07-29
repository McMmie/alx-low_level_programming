#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdint.h>
#include <fcntl.h>
/**
 * exit_error - prints an error message to stderr
 * @msg: error message
 *
 * Return: nothing
 */

void exit_error(const char *msg)
{
	fprintf(stderr, "Error %s\n", msg);
	_exit(98);
}

/**
 * elf_header_info -prints the ELF information
 * @head: a struct
 *
 * Return: nothing
 */

void elf_header_info(const header *head)
{
	int i;
		printf("Magic: ");
		for (i = 0; i < 16; i++)
		{
		printf("%02x ", head->e_ident[i]);
		}
		 printf("\n");

		printf("Class: %d\n", head->e_ident[4]);
		printf("Data: %d\n", head->e_ident[5]);
		printf("Version: %d\n", head->e_ident[6]);
		printf("OS/ABI: %d\n", head->e_ident[7]);
		printf("ABI Version: %d\n", head->e_ident[8]);

		printf("Type: %d\n", head->e_type);
		printf("Entry point address: 0x%lx\n", head->e_entry);
}

/**
 * main - checks the program
 * @argc: argument count
 * @argv: an array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int size, fd, rd;
	header head;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <elf_file>\n", argv[0]);
		return (1);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		exit_error("Failed to open file");
	}

	size = sizeof(head);
	rd = read(fd, &head, size);
	if (rd != size)
	{
		exit_error("Error reading ELF header");
	}

	if (head.e_ident[0] != 0x7F || head.e_ident[1] != 'E' ||
			head.e_ident[2] != 'L' || head.e_ident[3] != 'F')
	{
		exit_error("Not a valid ELF file.");
	}

	elf_header_info(&head);

	close(fd);
	return (0);
}
