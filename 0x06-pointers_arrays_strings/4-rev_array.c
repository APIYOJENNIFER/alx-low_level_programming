/**
 * reverse_array - reverse array
 * @a: hold array
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int i = 0, j, temp;

	for (; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
}
