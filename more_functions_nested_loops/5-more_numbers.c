#include "main.h"
#include <stdio.h>

#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;
	char c[] = "01234567891011121314";

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			_putchar(c[j]);
		}
		_putchar('\n');
	}
}
