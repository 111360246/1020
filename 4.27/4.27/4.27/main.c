#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int m, i,s,x,v;
	for (s = 1; s < 501; s++)
	{
		for (m = 1; m < 501; m++)
		{
			for (i = 1; i < 501; i++)
			{
				x = i * i;
				v =( m * m) + (s * s);
				if ((x == v))
				{
					if ((s <m) && (m < i))
					{
					printf("%d\t%d\t%d\n", s, m, i);
					}
				}
			}
		}	
	}
		
	
	system("pause");
	return 0;
}
