#include "unistd.h"

 /**
  * main -check the code
  * Return : always 0
  */
int _putchar(char c)
{
	return (write(1, &c, 1));

}
