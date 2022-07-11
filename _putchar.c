#include <unistd.h>

/**
 * _putchar - function that writes a character to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error -1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
