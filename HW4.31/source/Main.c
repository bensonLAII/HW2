#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j,z,k,q,w;
	for (i=1;i<=9;i++)
	{
		for (j = 1;j <= 9;j++)
		{
			if (j == 1)
			{
				for (z = 1;z <= 5-i;z++)
				{
					printf(" ");
				}
				if (i >= 6)
				{
					for (q = 1;q <= i-5;q++)
					{
						printf(" ");
					}
				}				
			}				
		}
		if (i <= 5)
		{
			for (k = 1;k <= 2*i-1;k++)
			{
				printf("*");
			}
		}
		else
		{
			w = i-6;
			for (k = 7;k >=2*w+1;k--)
			{
				printf("*");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}