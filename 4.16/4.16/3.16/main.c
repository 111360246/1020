#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	int temp=9;
	int temp2=0;

	printf("(A)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((j <= temp2))
			{
				printf("%s", "*");
			}
			else
			{
				printf("%s", " ");
			}
		}
		printf("\n");
		temp2++;
	}

	temp = 9;
	temp2 = 0;
	printf("(B)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((j <= temp))
			{
				printf("%s", "*");
			}
			else
			{
				printf("%s", " ");
			}
		}
		printf("\n");
		temp--;
	}

	temp = 0;
	temp2 = 0;
	printf("(C)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((j >= temp2))
			{
				printf("%s", "*");
			}
			else
			{
				printf("%s", " ");
			}
		}
		printf("\n");
		temp2++;
	}

	printf("(D)\n");
	temp = 0;
	temp2 = 9;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((j >= temp2))
			{
				printf("%s", "*");
			}
			else
			{
				printf("%s", " ");
			}
		}
		printf("\n");
		temp2--;
	}
	system("pause");
	return 0;
}
