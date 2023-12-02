#include "main.h"

/**
 * binary_to_uint - Converts a binary num to an unsigned int.
 * @b: A string of 0 and 1 char.
 *
 * Return: The converted number, or 0 if there is one or more char in the
 * string b that is not 0 or 1, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;

    if (b == NULL)
        return (0);

    while (*b)
    {
        if (*b != '0' && *b != '1')
            return (0);

        result = result * 2 + (*b - '0');
        b++;
    }

    return (result);
}

