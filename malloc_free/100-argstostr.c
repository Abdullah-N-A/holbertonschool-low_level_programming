#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all arguments of a program
 * @ac: Number of arguments
 * @av: Array of argument strings
 *
 * Return: Pointer to a new string, with each argument
 *         followed by '\n', or NULL if ac == 0, av == NULL,
 *         or memory allocation fails
 */
char *argstostr(int ac, char **av)
{
    int i, j, total_len = 0, pos = 0;
    char *str;

    if (ac == 0 || av == NULL)
        return (NULL);

        for (i = 0; i < ac; i++)
        total_len += strlen(av[i]) + 1; 

    str = malloc(sizeof(char) * (total_len + 1));
    if (str == NULL)
        return (NULL);


    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j]; j++)
            str[pos++] = av[i][j];
        str[pos++] = '\n';
    }

    str[pos] = '\0';

    return (str);
}
