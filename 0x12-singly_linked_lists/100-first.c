#include <stdio.h>
/**
 * print_string_before_main - execute before main
 */
void print_string_before_main(void)__attribute__((constructor));
/**
 * print_string_before_main - print string
 */
void print_string_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
