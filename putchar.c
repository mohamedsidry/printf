#include "main.h"


/**
* _putchar - print the given char to standard output .
*
* @c: input char .
*
* Return: number of printed chars (1) and -1on failier .
*/


int _putchar(char c)
{
return (write(1, &c, 1));
}
