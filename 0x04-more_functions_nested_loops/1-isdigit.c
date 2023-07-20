#include "main.h"

/**
 * _isdigit - check if a letter is digit
 * @x: The number to be checked
 * Retrun: 1 for character thta will be a digit or 0 for ant else
 */

int _isdigit(int x)
{
	if (x >= 48 && x <=57)
	{
		return (1);
	}
	return (0);
}
