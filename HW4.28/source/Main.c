#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int represent;
	double salary,hours,sum,salemoney;
	printf("�п�J�~��N�X(1)�g�z�H��(2)���~�u(3)�����(4)�s�u :");
	scanf_s("%d", &represent);

	switch (represent)
	{
	case 1:
		printf("�п�J�g�~ :");
		scanf_s("%lf", &salary);
		printf("�~��ұo : %.2f",salary);
		break;
	
	case 2:
		printf("�п�J�u�@�ɪ�(�p��) :");
		scanf_s("%lf", &hours);
		printf("�п�J�u�@���~ :");
		scanf_s("%lf", &salary);
		if (hours <= 40)
		{
			salary = salary * hours ;
		}
		else
		{
			salary = (salary*40)+salary * (hours-40)*1.5 ;
		}
		printf("�~��ұo : %.2f",salary);
		break;
	
	case 3:
		printf("�п�J��P�P����B :");
		scanf_s("%lf", &salemoney);
		salary = 250 + salemoney*.057;
		printf("�~��ұo : %.2f",salary);
		break;
	
	case 4:
		printf("�п�J���~�����S :");
		scanf_s("%lf", &salemoney);
		printf("�п�J�Ͳ���� :");
		scanf_s("%lf", &sum);
		salary = salemoney * sum;
		printf("�~��ұo %.2f ",salary);
		break;
	}
	printf("\n");
	system("pause");
	return 0;
}
