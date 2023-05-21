#include <stdio.h>

int main() 
{
	int dump;
	int a[100];
	int x=0, x2=0;
	int max ;
	int min ;
	for (int i = 1; i <= 10; i++)
	{
		scanf("%d", &dump);
		for (int j = 0; j < 100; j++)
		{
			scanf("%d", &a[j]);
		}
		
		for (int z = 0; z < dump; z++)
		{
			 max = a[0];
			min = a[0];
			for (int j = 0; j < 100; j++)
			{
				if (max <= a[j]) {
					max = a[j];
					x = j;
				}
			}

			for (int j = 0; j < 100; j++)
			{
				if (min >= a[j])
				{
					min = a[j];
					x2 = j;
				}
			}
			//printf("%d %d %d %d\n", max, min,a[x],a[x2]);
			a[x] -= 1;
			a[x2] += 1;
			//printf("%d %d %d %d\n", max, min, a[x], a[x2]);
		}
		
		max = a[0];
		min = a[0];
		for (int j = 0; j < 100; j++)
		{
			if (max <= a[j]) {
				max = a[j];
				x = j;
			}
		}

		for (int j = 0; j < 100; j++)
		{
			if (min >= a[j])
			{
				min = a[j];
		
			}
		}
		printf("#%d %d\n",i, max - min);
	}
	

}