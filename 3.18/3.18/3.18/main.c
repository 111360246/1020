#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float  s=0, d;
		
	while (s!=-1)
	{
		printf("Enter sales in dollars(-1 to end):");
		scanf_s("%f", &s);
		if (s != -1)
		{
			d = s * 0.09+200;
			printf("Salary is:$%7.2f\n",d);
		}
		else
		{
			system("pause");
		}
	}
	return 0;
}
