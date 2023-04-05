#include "main.h"
#include <unistd.h>
/**
 * _putchar - this is used for writting the character c into stdout
 * @c: is the character to print out
 *
 * Return: success (1).
 * for  error, return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
