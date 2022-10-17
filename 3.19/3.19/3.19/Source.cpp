#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float  s=0 ,d,f,a;

	while (s != -1)
	{
		printf("Enter loan principal(-1 to end):");
		scanf_s("%f", &s);
		if (s != -1)
		{
			printf("Enter interest rate:");
			scanf_s("%f", &d);
			printf("Enter term of the loan in days:");
			scanf_s("%f", &f);
			a = s*d*f/365.0;
			printf("The interest charge is $%7.2f\n", a);
		}
		else
		{
			system("pause");
		}
	}
	return 0;
}
