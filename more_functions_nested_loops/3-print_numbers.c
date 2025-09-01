#include "main.h"
#include <stdio.h>

/*
write a func that print numbers from 0 to 9




*/
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
