#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int m = 5000,a=0;
	float s = 1.1,w;
	for (int u = 1; u < 16; u++)
	{
		if (u % 3 == 0)
		{
			s = s + 0.005;
			a++;
			w = m * s;
			printf("%d years =%6.f\n",a, w);
			m = w;
		}
		else if(u%3!=0)
		{
			a++;
			w = m * s;
			printf("%d years =%6.f\n", a, w);
			m = w;
		}
		
	}
	
	system("pause");
	return 0;
}
