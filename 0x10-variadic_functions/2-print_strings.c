#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings
 * @separator: string separator
 * @n: variables count
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *str;

	va_list ap;

	if (separator == NULL)
		separator = "";

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);

		if (str == NULL)
			str = "(nil)";

		printf("%s", str);

		if (i < n - 1)
			printf("%s", separator);

	}
	printf("\n");

	va_end(ap);
}
