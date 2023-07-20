#include "main.h"

/**
 * _isupper - check if the letter is upper
 * @x: The number to be cheked
 * Return: 1 fr upper letter or 0 for any else
 */

int _isupper(int x)
{
	if (x >= 65 && x <=90)
	{
		return (1);
	}
	return (0);
}
