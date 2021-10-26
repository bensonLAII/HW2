#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float principal, rate, days, interest;
	
	while (1 == 1)
	{
		printf("Enter loan principal(-1 is end.):");
		scanf_s("%f",&principal);
		if (principal == -1)
			break;
		printf("Enter interest rate:");
		scanf_s("%f", &rate);
		printf("Enter term of the loan in days:");
		scanf_s("%f", &days);

		interest = principal * rate*days / 365;

		printf("The interest charge is:%.2f\n\n",interest);
	}

	system("pause");
	return 0;
}