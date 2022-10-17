#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float  s = 0, d,a;

	while (s != -1)
	{
		printf("Enter # of hours worked(-1 to end):");
		scanf_s("%f", &s);
		if (s != -1)
		{
			printf("Enter hourly rate of the worker($00.00):");
			scanf_s("%f", &d);
			if (s <= 40)
			{
				a = d * s;
				printf("Salary is:$%7.2f\n", a);
			}
			else
			{
				a = (s-40)*(1.5*d)+40*d;
				printf("Salary is:$%7.2f\n", a);
			}
		}
		else
		{
			system("pause");
		}
	}
	return 0;
}
