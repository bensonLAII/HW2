#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float account, amount,limit;
	float term, rate,payable;
	
	while (1)
	{
		printf("Enter account number(-1 is end.):\n");
		scanf_s("%f",&account);
		if (account == -1)
			break;
		printf("Enter beginning Balance\n");
		scanf_s("%f",&amount);
		printf("Enter Total of all items charged by this customer this month\n");
		scanf_s("%f",&term);
		printf("Enter  Total of all credits applied to this customer's account this month\n");
		scanf_s("%f",&rate);
		printf("Enter  Allowed credit limit\n");
		scanf_s("%f", &limit);

		payable = amount+term-rate;

		if (payable > limit)
		{
			printf("Account:  %.2f\n",account);
			printf("Credit limit:%.2f\n",limit);
			printf("Balance: %.2f\n", payable);
			printf("Credit limit Exceeded.\n");
		}
			
	}
	

	system("pause");
	return 0;
}