#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	int a, b,d=0;
	double c;
	for (a = 1;a < 500;a++)
	{
		for (b = 1;b < 500;b++)
		{
			c = sqrt(pow(a,2) + pow(b,2));
			if (c > 500)
				break ;
			if (c - (int)c == 0)
			{
				printf("%d\t%d\t%.0f\n", a, b, c);
				d++;
			}
		}
	}
	printf("\n總共有 %d 組\n\n",d);
	system("pause");
	return 0;
}