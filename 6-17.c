#include <stdio.h>

void main()
{
	int j, i, k;

	for (j = 2; j < 10; j++)
	{
		printf("#Á¦%d´Ü# \t ", j);
	}
	printf("\n");

		for (i = 1; i < 10; i++)
		{
			for (k = 2; k < 10; k++)
			{
				printf("%d X %d = %d \t", k, i, k*i);
			}
			printf("\n");
		}
}
