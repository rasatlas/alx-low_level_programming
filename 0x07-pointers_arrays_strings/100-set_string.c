#include "main.h"

/**
 * set_string - is a function that sets the value of a pointer to a char.
 *
 * @s: is pointer to to a char pointer
 * @to: char pointer
 */

void set_string(char **s, char *to)
{
	*s = to;
}
