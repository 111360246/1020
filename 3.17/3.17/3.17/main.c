#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a=0;
	float  s, d, f, g,h;
	while (a != -1)
	{
		printf("Enter account number(-1 to end):");
		scanf_s("%d", &a);
		if(a!=-1)
		{
			printf("Enter beginning balance:");
			scanf_s("%f", &s);
			printf("Enter total charges:");
			scanf_s("%f", &d);
			printf("Enter total credits:");
			scanf_s("%f", &f);
			printf("Enter credit limit:");
			scanf_s("%f", &g);
			h = s + d - f;

			if (h > g)
			{
				printf("Account:\t%d\n", a);
				printf("Credit limit:\t%7.2f\n", g);
				printf("Balance:\t%7.2f\n", h);
				printf("Credit Limit Exceeded.\n");
			}
		}
		else
		{
			system("pause");
		}
	}
	return 0;
}
