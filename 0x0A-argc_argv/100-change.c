#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *main - prints minimum number of coins to make change
  *@argc: Agument count
  *@argv: Argument vector
  *Return: Always 0
  */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	int coins[] = {25, 10, 5, 2, 1};
	int coinsNumber = sizeof(coins) / sizeof(coins[0]);
	int coinCount = 0;

	int i;

	for (i = 0; i < coinsNumber; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			coinCount++;
		}
	}

	printf("%d\n", coinCount);
	return (0);
}
