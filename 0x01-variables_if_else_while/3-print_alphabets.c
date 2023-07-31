#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` to print lowercase and then uppercase alphabet.
 * Return: 0
 */
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		c++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		c++;
	}

	putchar('\n');

	return (0);
}
