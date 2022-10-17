#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int m ,i;
	float s, w,h;
	
	printf("Enter your paycode:");
	scanf_s("%d", &i);
	switch (i)
	{
	case 1:
		printf("Your weekly pay is $1000\n ");
		break;
	case 2:
		printf("Emter your working hours:");
		scanf_s("%f", &h);
		if (h > 40.0)
		{
			s = (h - 40.0)*1.5*10+40*10.0;
			printf("Your weekly pay is $%7.2f\n ",s);
		}
		else
		{
			printf("Your weekly pay is $%7.2f\n ", h*10.0);
		}
		break;
	case 3:
		printf("Emter your gross weekly sales:");
		scanf_s("%f", &h);
		s = h * 0.057 + 250.0;
		printf("Your weekly pay is $%7.2f\n ", s);
		break;
	case 4:
		printf("Emter how many items you produce:");
		scanf_s("%d", &m);
		printf("Your weekly pay is $%7.2f\n ", m*1.2);
		break;
	}
	system("pause");
	return 0;
}
