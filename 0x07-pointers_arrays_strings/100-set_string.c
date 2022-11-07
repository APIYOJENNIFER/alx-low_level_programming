#include "main.h"
/**
 * set_string - set the value of a pointer to a char
 * @s: pointer to pointer
 * @to: holds character value
 */
void set_string(char **s, char *to)
{
	*s = to;
}
