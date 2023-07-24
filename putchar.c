#include "main.h"



/**
* _putchar - prints a char to stout.
*
* @c: char to be printed .
*
* Return: 1 number of printed char . -1 fail .
*
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
