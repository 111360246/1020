#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int len, br;
	char a = '+';
	char s = ' ';
	printf("Enter length:");
	scanf_s("%d", &len);
	printf("Enter breadth:");
	scanf_s("%d", &br);
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < br; j++)
		{
			if ((i == 0) || (i == (len-1)) || (j == 0) || (j == (br-1)))
				printf("%c", a );
			else
				printf("%c", s);
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}
