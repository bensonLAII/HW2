#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int represent;
	double salary,hours,sum,salemoney;
	printf("請輸入薪資代碼(1)經理人員(2)時薪工(3)抽佣金(4)零工 :");
	scanf_s("%d", &represent);

	switch (represent)
	{
	case 1:
		printf("請輸入週薪 :");
		scanf_s("%lf", &salary);
		printf("薪資所得 : %.2f",salary);
		break;
	
	case 2:
		printf("請輸入工作時長(小時) :");
		scanf_s("%lf", &hours);
		printf("請輸入工作時薪 :");
		scanf_s("%lf", &salary);
		if (hours <= 40)
		{
			salary = salary * hours ;
		}
		else
		{
			salary = (salary*40)+salary * (hours-40)*1.5 ;
		}
		printf("薪資所得 : %.2f",salary);
		break;
	
	case 3:
		printf("請輸入單周銷售金額 :");
		scanf_s("%lf", &salemoney);
		salary = 250 + salemoney*.057;
		printf("薪資所得 : %.2f",salary);
		break;
	
	case 4:
		printf("請輸入產品單件報酬 :");
		scanf_s("%lf", &salemoney);
		printf("請輸入生產件數 :");
		scanf_s("%lf", &sum);
		salary = salemoney * sum;
		printf("薪資所得 %.2f ",salary);
		break;
	}
	printf("\n");
	system("pause");
	return 0;
}
