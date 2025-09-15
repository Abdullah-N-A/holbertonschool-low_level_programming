#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: Number of arguments.
 * @av: Array of argument strings.
 *
 * Return: Pointer to a new string containing all arguments separated
 *         by '\n', or NULL if ac == 0, av == NULL, or memory allocation fails.
 */
char *argstostr(int ac, char **av)
{
    int i, len = 0, pos = 0;
    char *result;

    if (ac == 0 || av == NULL)
        return (NULL);

    /* Calculate total length required including '\n' for each argument */
    for (i = 0; i < ac; i++)
        len += strlen(av[i]) + 1; /* +1 for '\n' */

    /* Allocate memory for the concatenated string (+1 for '\0') */
    result = malloc(sizeof(char) * (len + 1));
    if (result == NULL)
        return (NULL);

    /* Copy each argument followed by '\n' */
    for (i = 0; i < ac; i++)
    {
        strcpy(result + pos, av[i]);
        pos += strlen(av[i]);
        result[pos++] = '\n';
    }

    result[pos] = '\0'; /* Null-terminate the string */

    return (result);
}
