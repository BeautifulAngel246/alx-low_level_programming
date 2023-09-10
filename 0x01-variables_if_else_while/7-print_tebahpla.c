#include <stdio.h>

/**
 * main - printing lower cases in reverse order,
 * folowed by a new line
 * Return: Always 0
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
	putchar(ch);
	}
	putchar('\n');

	return (0);
}
