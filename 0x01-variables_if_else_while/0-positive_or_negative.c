#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* more headers goes there */
/* betty style doc for function goes there */
/*
 *  main - Entry point
 * Return: Always 0 (Success)
 */
int(char *)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
