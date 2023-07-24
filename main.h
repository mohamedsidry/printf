#ifndef MAIN_H
#define MAIN_H

/** STANDARD LIBRARIES **/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

/** FUNCTIONS PROTOTYPES **/
int _printf(const char *format, ...);
int select_format(va_list args,char format);
int _putchar(char c);
int _printchar(va_list arg);
int _printstr(va_list arg);
int _printpers(va_list arg);


/** SYMBOLIC CONSTANT MACROS **/

#define ONEBYTE 1

/**  **/

typedef struct mystruct
{
  char sign;
  int (*fun)(va_list);
}mystruct;


#endif /*** MAIN_H ***/
