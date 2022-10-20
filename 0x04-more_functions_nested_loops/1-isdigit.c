/**
 * _isdigit - check for a digit (0 - 9)
 * @c: hold a digit
 *
 * Return: 0 Always
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

