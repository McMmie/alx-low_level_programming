#ifndef MAIN
#define MAIN
#include <stddef.h>
#include <sys/types.h>

ssize_t read_textfile(const char *filename, size_t letters);

int _putchar(char c);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);

#endif
