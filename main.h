#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 *	   On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * struct printer - Define a new struct type that prints
 *		    the argument passed from the arguments
 *		    list according to the format character
 * @format: A character specifing what print function to use
 * @print_arg: A pointer to the function that will be used with format
 */
typedef struct printer
{
	char format;
	int (*print_arg)(va_list);
} printer_t;


/**
 * print_int - Prints an integer.
 * @args: A list of arguments containing the number to be printed
 *
 * Return: The number of digits printed
 */
int print_int(va_list args);

/**
 * print_int - Prints a character.
 * @args: A list of arguments containing the character to be printed
 *
 * Return: Always 1
 */
int print_char(va_list args);

/**
 * print_string - Print a string
 * @args: A list of arguments containing the string to be printed
 *
 * Return: The length of the printed string
 */
int print_string(va_list args);

/**
 * _printf - Print any argument passed
 * @format: A list of types of arguments passed to the function:
 *	    %c: char
 *	    %i: integer
 *	    %d: integer
 *	    %f: float
 *	    %s: char *
 *	    any other char should be printed as is
 *
 * Return: The length of the printed string
 */
int _printf(const char *format, ...);

#endif