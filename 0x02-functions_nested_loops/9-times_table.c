#include "holberton.h"

/**
 * times_table - times table
 *
 * Return: Always 0
 */

void times_table(void)
{
	int num1;
	int num2;
	int resul;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			resul = num1 * num2;
			if (resul < 10)
			{
				if (num2 > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(resul + '0');
				if (num2 <= 8)
				{
					_putchar(',');
				}
			}
			else
			{
				_putchar(' ');
				_putchar((resul / 10) + '0');
				_putchar((resul % 10) + '0');
				if (num2 <= 8)
				{
					_putchar(',');
				}

			}

		}
		_putchar('\n');
	}
}
