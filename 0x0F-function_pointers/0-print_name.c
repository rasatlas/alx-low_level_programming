#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 *
 * @name: char pointer to input name.
 * @f: function pointer that accepts char pointer as argument & returns void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
