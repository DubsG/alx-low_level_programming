#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
/**
* main - Determine if a random number is negative, positive or zero.
*
* Return: 0 on success
*/
=======
#include <stdio.h>

/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
>>>>>>> 170c5658acf5265d4fa2fbc379677a6757d75fa1
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
<<<<<<< HEAD
	if (n < 0)
	{
		printf("%d is %s\n" n, "negative");
	}
	else if (n > 0)
	{
		printf("%d is %s\n" n, "positive");
	}
	else
	{
		printf("%d is %s\n" n, "zero");
=======
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
>>>>>>> 170c5658acf5265d4fa2fbc379677a6757d75fa1
	}
	return (0);
}
