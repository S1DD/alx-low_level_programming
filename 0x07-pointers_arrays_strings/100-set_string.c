#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: source string
 * @to: the value to set the string to
 *
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
