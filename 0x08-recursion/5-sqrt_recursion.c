#include "holberton.h"

/**
 * _sqrt_recursion - validate the given number
 * to send to get_value*
 * @n : given number
 * Return: the result of power
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (0);

	else if (n == 1)
		return (1);

	else
		return (value(n, 1));

}


/**
 * value - compare the product of the incrementer to
 * be the same given number
 * @n : given number
 * @i : incrementer to multiply with itself
 * Return: the incrementer that is equivalent to the square root
 */

int value(int n, int i)
{
	if (n == (i * i))
		return (i);

	else if (n < (i * i))
		return (-1);

	else
		return (value(n, (i + 1)));


}
