#ifndef MAIN
#define MAIN
#include <stddef.h>
#include <sys/types.h>
#include <stdint.h>

/**
 * struct header - contains the headers
 * @e_ident: first parameter
 * @e_type: second parameter
 * @e_machine: third parameter
 * @e_version: fourth parameter
 * @e_entry: fifth parameter
 *
 * Description: a struct
 */

typedef struct header
{
	uint8_t e_ident[16];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uint64_t e_entry;
} header;

ssize_t read_textfile(const char *filename, size_t letters);

int _putchar(char c);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);

#endif
