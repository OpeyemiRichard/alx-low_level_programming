#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: (0) Success
 */

int main(void)
{
	int s;

	for (s = '0'; s <= '9'; s++)
	{
		putchar(s);
		if (s != '9')
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
