#include "main.h"
#include <stdlib.h>

/**
 * word_count - Counts the number of words in a string
 * @s: Input string
 *
 * Return: Number of words
 */
int word_count(char *s)
{
    int i = 0, wc = 0;

    while (s[i])
    {
        /* Skip spaces */
        while (s[i] && s[i] == ' ')
            i++;
        if (s[i] && s[i] != ' ')
        {
            wc++;
            while (s[i] && s[i] != ' ')
                i++;
        }
    }
    return (wc);
}

/**
 * strtow - Splits a string into words
 * @str: Input string
 *
 * Return: Pointer to array of strings (words), NULL on failure
 */
char **strtow(char *str)
{
    char **words;
    int i = 0, j, k = 0, wc, len;

    if (!str || *str == '\0')
        return (NULL);

    wc = word_count(str);
    if (wc == 0)
        return (NULL);

    words = malloc(sizeof(char *) * (wc + 1));
    if (!words)
        return (NULL);

    while (str[i] && k < wc)
    {
        while (str[i] && str[i] == ' ')
            i++;
        if (str[i] && str[i] != ' ')
        {
            len = 0;
            j = i;
            while (str[j] && str[j] != ' ')
            {
                len++;
                j++;
            }

            words[k] = malloc(sizeof(char) * (len + 1));
            if (!words[k])
            {
                while (k-- > 0)
                    free(words[k]);
                free(words);
                return (NULL);
            }

            for (j = 0; j < len; j++)
                words[k][j] = str[i + j];
            words[k][len] = '\0';
            k++;
            i += len;
        }
    }

    words[k] = NULL;
    return (words);
}
