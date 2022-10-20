/**
 * _isupper - check for uppercase character
 * @c: hold character value
 *
 * Return: 0 Always
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
