#include <stdio.h>

int main() 
{
	int n;
	int a[100][100];
	
	int max ;
	int min ;
	int sum = 0;
	for (int i = 1; i <= 10; i++)
	{
		scanf("%d", &n);
		for (int j = 0; j < 100; j++)
		{
			for (int k = 0; k < 100; k++)
			{
				scanf("%d", &a[j][k]);
			}
		}
		max = 0;

		for (int j = 0; j < 100; j++)//행
		{
			sum = 0;
			for (int k = 0; k < 100; k++)
			{
				sum += a[j][k];
			}
			if (sum > max)max = sum;
		}
		sum = 0;
		for (int j = 0; j < 100; j++)//행
		{
			sum = 0;
			for (int k = 0; k < 100; k++)
			{
				sum += a[k][j];
			}
			if (sum > max)max = sum;
		}
		sum = 0;
		for (int j = 0; j < 100; j++)//행
		{

				sum += a[j][j];

			
		}
		if (sum > max)max = sum;
		sum = 0;
		int z = 99;
		for (int j = 0; j < 100; j++)//행
		{
			
				sum += a[j][z];
				z--;
			
		}
		if (sum > max)max = sum;
		sum = 0;
		printf("#%d %d\n",i, max);
	}
	

}
