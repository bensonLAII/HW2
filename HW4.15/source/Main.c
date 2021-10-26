#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	double principal=1000.0,rate=0.1,j=9.5;
	for (int i = 5;i < 10;i++)
	{
		j = j + 0.5;
		printf("Rate is %.2f %% . \n", j);
		printf("%4s%21s\n", "Year", "amount on deposit");
		for (unsigned int year = 1;year <= 10;++year)
		{
			double amount = principal * pow(1.0 + rate, year);
			printf("%4u%21.2f\n",year,amount);
		}
		rate = rate +0.05;
		printf("\n");
	}
	

	system("pause");
	return 0;
}
