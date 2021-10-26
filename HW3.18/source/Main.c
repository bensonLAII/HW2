#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float dollars,sum;
	while (1==1)
	{
		printf("Enter sales in dollars(-1 is end.): ");
		scanf_s("%f", &dollars);
		if (dollars == -1)
			break;
		sum = 200 + dollars * 0.09;

		printf("Salary is  %.2f \n", sum);
	}
	

	system("pause");
	return 0;
}