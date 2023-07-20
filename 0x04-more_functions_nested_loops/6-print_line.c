#include "main.h"

/**
 * print_line - Draws a straight line in the terminal using '_'.
 * @n: The number of times the character '_' should be printed.
 *
 * If n is 0 or less, the function prints just a new line.
 */
void print_line(int n)
{
    if (n <= 0)
    {
        /* Print a new line and return if n is 0 or less */
        _putchar('\n');
        return;
    }

    while (n > 0)
    {
        /* Print '_' n times */
        _putchar('_');
        n--;
    }

    /* Print a new line at the end of the line */
    _putchar('\n');
}
