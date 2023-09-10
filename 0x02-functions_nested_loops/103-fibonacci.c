#include <stdio.h>

/**
 * main - sum up even fibonacci up to 4million
 *
 * Return: (0)
 */
int main(void)
{
	long int x = 1, y = 2, sum = 0, tsum = 0;

	while (y <= 4000000)
	{
	if (y % 2 == 0)
	{
		tsum += y;
	}
	sum = x + y;
	x = y;
	y = sum;
	}

	printf("%ld\n", tsum);

	return (0);
}
