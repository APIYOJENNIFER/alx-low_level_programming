/**
 * _abs - compute the absolute value of an integer
 * @i: holds value being computed
 *
 * Return: 0 always
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = i * (-1);
		return (i);
	}
	else
	{
		return (i);
	}
}

