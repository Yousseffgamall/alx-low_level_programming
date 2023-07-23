#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function serves as the entry point of the program.
 * It executes the main functionality of the program.
 *
 * Return: 0 on success, non-zero value on error
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	} else if (n == 0)
	{
		printf("%i is zero.\n", n);
	} else
	{
		printf("%i is negative.\n", n);
	}

	return (0);
}
