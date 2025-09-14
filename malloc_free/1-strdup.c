#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated
 *           space in memory, which contains a copy
 *           of the string given as a parameter
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string,
 *         or NULL if str = NULL or if malloc fails
 */
char *_strdup(char *str)
{
    char *dup;
    unsigned int i, length = 0;

    /* if str is NULL, return NULL immediately */
    if (str == NULL)
        return (NULL);

    /* calculate length of the string */
    while (str[length] != '\0')
        length++;

    /* allocate memory for copy (+1 for null terminator) */
    dup = malloc(sizeof(char) * (length + 1));
    if (dup == NULL)
        return (NULL);

    /* copy characters one by one */
    for (i = 0; i < length; i++)
        dup[i] = str[i];

    /* add null terminator at the end */
    dup[length] = '\0';

    return (dup);
}

