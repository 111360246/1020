#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char sign = '*';
	char sign2 = ' ';
	int i, j;
	int temp;
	int temp2;

	temp = 3;
	temp2 = 5;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if ((i ==0 ) && (j == 4))
			{
				printf("%c", sign);
			}
			else if ((i >= 1)&&(i < 4) && (j < temp2) && (j > temp))
			{
				printf("%c", sign);
				
			}
			else
			{
				printf("%c", sign2);
			}
		}
		temp--;
		temp2++;
		printf("\n");
	}
	temp = 0;
	temp2 = 9;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if ((i == 0) || ((i==4)&&(j==4)))
			{
				printf("%c", sign);
			}
			else if ((i > 0) && (i < 5) && (j < temp2) && (j >=temp))
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		temp++;
		temp2--;
		printf("\n");
	}

	system("pause");
	return 0;
}
