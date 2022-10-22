#include "main.h"
/**
 * jack_bauer - print every minute of the day of jack bauer
 *
 * Return: 0 Always
 */
void jack_bauer(void)
{
	int i = 0;

	int j = 0;

	int k = 0;

	int l = 0;
	
	for (; i < 3; i++)
	{
		for (; j < 10; j++)
		{
			for (; k < 6; k++)
			{
				for (; l < 10; l++)
				{
					if (i == 2 && j > 3)
					{
						break;
					}
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar('\n');
				}
			}
		}
	}
}

