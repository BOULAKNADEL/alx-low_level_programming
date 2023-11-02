#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size of memory to allocate
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
    void *Hi;

    Hi = malloc(b);
    if (Hi == NULL)
    {
        exit(98);
    }
    return (Hi);
}

