#include <stdio.h>
int main()
{
	int t, n, m, sum = 0;
	int max = 0;
	int a[15][15] = { 0 };
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
	{
		scanf("%d %d", &n, &m);
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				scanf("%d", &a[j][k]);
			}
		}
		for (int z = 0; z < m; z++)
		{
			for (int x = 0; x < m; x++)
			{
				max += a[z][x];
			}
		}
		int cnt = 0,cnt1=0;
		int z;
		int x;
		for (int j = 0; j < n - m + 1; j++)
		{
			for (int k = 0; k < n - m + 1; k++)
			{
				z = j;
				x = k;
				while (cnt < m)
				{
					
					while (cnt1 < m)
					{
						sum += a[z][x];
						
						x++;
						cnt1++;
						
					}cnt1 = 0; 
					x = k;
					cnt++;
					z++;
				}cnt = 0;
				
				if (sum > max)max = sum;

				
				sum = 0;
			}
		}
		printf("#%d %d\n", i, max);
		max = 0;
	}
}
