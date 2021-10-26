#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int lenght,breadth,i,j;

	printf("Enter a lenght :");
	scanf_s("%d", &lenght);
	printf("Enter a breadth :");
	scanf_s("%d", &breadth);

	for (i=1;i <= breadth ;i++)
	{
		for (j = 1;j <= lenght;j++)
		{
			if((i==1) || (i=breadth) || (j==1) || (j=lenght))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

		

	system("pause");
	return 0;
}
