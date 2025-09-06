#include "main.h"

void puts_half(char *str)
{
	char *ptr = str;
	int len = 0;

	while (*ptr != '\0')
	{
		len++;
		ptr++;
	}

	ptr = str;
	if (len % 2 != 0)
		ptr += (len + 1) / 2;
	else
		ptr += len / 2;

	while (*ptr != '\0')
	{
		_putchar(*ptr);
		ptr++;
	}

	_putchar('\n');
}
