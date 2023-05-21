#include <stdio.h>
#include <math.h>
int main()
{
	int t;
	int a[20] = { 0 }, b[20] = { 0 };
	int n, m,cnt=0;
	int sum = 0,max=0;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
	{
		scanf("%d %d", &n, &m);
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &a[j]);
		}
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &b[j]);
		}
		int id = 0;
		if (n > m) 
		{
			cnt = n - m;
			for (int j = 0; j <= cnt; j++)
			{
				id = j;
				for (int k = 0; k < m; k++)
				{
					sum += a[id] * b[k];
					id++;
				}
				if (sum > max)max = sum;
				sum = 0;
			}
		}
		else if (n < m)
		{
			cnt = m - n;
			for (int j = 0; j <= cnt; j++)
			{
				id = j;
				for (int k = 0; k < n; k++)
				{
					sum += b[id] * a[k];
					id++;
				}
				if (sum > max)max = sum;
				sum = 0;
			}
		}
		else
		{
			for (int k = 0; k < n; k++)
			{
				sum += b[k] * a[k];
				
			}max = sum;
		}
		printf("#%d %d\n", i, max);
		max = 0;
		sum = 0;
	}
}
