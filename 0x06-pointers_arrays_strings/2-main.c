#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *_strncpy(char *dest, char *src, int n);
	char s1[98];
	char *ptr;
	int i;

	for (i = 0; i < 98 - 1; i++)
	{
		s1[i] = '*';
	}
	s1[i] = '\0';
	printf("%s\n", s1);
	ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
	printf("%s\n", s1);
	printf("%s\n", ptr);
	ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
	printf("%s\n", s1);
	printf("%s\n", ptr);
	for (i = 0; i < 98; i++)
	{
		if (i % 10)
		{
		printf(" ");
		}
		if (!(i % 10) && i)
		{
		printf("\n");
		}
		printf("0x%02x", s1[i]);
	}

	printf("\n");
	return (0);
}
