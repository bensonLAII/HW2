#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j,k;

	for (i = 1;i <= 10;i++)
	{
		for (j = 1;j <= 10;j++)
		{
			printf("*");
			if (j == i)
			{
				break;
			}
		}
		printf("\n");
	}

	printf("\n");

	for (i = 1;i <= 10;i++)
	{
		for (j = 1;j <= 10;j++)
		{
			printf("*");
			if (j == 11-i)
			{
				break;
			}
		}
		printf("\n");
	}

	printf("\n");

	for (i = 1;i <= 10;i++)
	{
		for (j = 1;j <= 10;j++)
		{
			if (j == 1)
			{
				for (k = 1;k < i;k++)
				{
					printf(" ");
				}
			}

			printf("*");
			if (j == 11 - i)
			{
				break;
			}
		}
		printf("\n");
	}

	printf("\n");

	for (i = 1;i <= 10;i++)
	{
		for (j = 1;j <= 10;j++)
		{
			if (j == 1)
			{
				for (k = 1;k < 11-i;k++)
				{
					printf(" ");
				}
			}
			
			
			printf("*");
			if (j == i)
			{
				break;
			}
		}
		printf("\n");
	}

	system("pause");
	return 0;
}


