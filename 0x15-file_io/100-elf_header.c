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

	printf("Elf Header:\n");
		printf("Magic: ");
		for (i = 0; i < 16; i++)
		{
		printf("%02x ", head->e_ident[i]);
		}
		 printf("\n");

		printf("Class:\t\t\t			%s\n",
			(head->e_ident[4] == 1) ? "ELF32" :
			((head->e_ident[4] == 2) ? "ELF64" : "Unknown"));
		printf("Data:\t\t\t				%s\n",
			(head->e_ident[5] == 1) ?
			"2's complement, Little Endian" : ((head->e_ident[5] == 2) ?
			"2's complement, Big Endian" : "unknown"));
		printf("Version:\t\t\t			%s\n",
			(head->e_ident[6] == 1) ? "1 (Current)" : "Unknown");
		printf("OS/ABI:\t\t\t					");
		switch (head->e_ident[7])
		{
			case 0:
				printf("UNIX - System V\n");
				break;
			case 1:
				printf("UNIX - HP-UX\n");
				break;
			case 2:
				printf("UNIX - NetBSD\n");
				break;
			case 3:
				printf("UNIX - Linux\n");
				break;
			case 6:
				printf("UNIX - Sun Solaris\n");
				break;
			case 9:
				printf("UNIX - FreeBSD\n");
				break;
			case 12:
				printf("UNIX - OpenBSD\n");
				break;
			default:
				printf("<Unknown>\n");
		}

		printf("  ABI Version:\t\t\t                       %d\n",
	head->e_ident[8]);
	printf("  Type:                                   ");
	switch (head->e_type)
	{
		case 0:
			printf("NONE (No file type)\n");
			break;
		case 1:
			printf("REL (Relocatable file)\n");
			break;
		case 2:
			printf("EXEC (Executable file)\n");
			break;
		case 3:
			printf("DYN (Shared object file)\n");
			break;
		case 4:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", head->e_type);
	}
	printf("  Entry point address:				%lx\n",
	head->e_entry);
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
