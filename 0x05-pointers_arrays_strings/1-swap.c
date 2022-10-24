/**
 * swap_int - swap two integers
 * @a: hold first value
 * @b: hold second value
 */
void swap_int(int *a, int *b)
{
	*a = *a - *b;

	*b = *a + *b;

	*a = *b - *a;
}
