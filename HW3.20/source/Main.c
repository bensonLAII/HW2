#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float hours,rate,salary;

	while (1 == 1)
	{
		printf("Enter # of hours worked (-1 is end.) :");
		scanf_s("%f", &hours);
		if (hours == -1)
			break;
		printf("Enter hourly rate of the work :");
		scanf_s("%f", &rate);

		if (hours <= 40)
		{
			salary = hours * rate;
		}
		else
		{
			salary = 40 * rate+(hours-40)*rate*1.5;

		}
		printf("Salary is $ %.2f \n\n", salary);
	
	}
	system("pause");
	return 0;
}

