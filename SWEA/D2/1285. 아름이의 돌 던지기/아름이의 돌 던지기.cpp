#include <stdio.h>

#include<string.h>

int main()

{
	int t, cnt=0,min=0;
	int n, tmp;
	int a[1000] = { 0 };
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
	{
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &a[j]);
			if (a[j] < 0)a[j] = -a[j];
		}
		for (int j = 0; j < n; j++)
		{
			for (int k = j; k < n; k++)
			{
				if (a[j] > a[k])
				{
					tmp = a[j];
					a[j] = a[k];
					a[k] = tmp;
				}
			}
		}
		min = a[0];
		for (int j = 0; j < n; j++)
		{
			if (min == a[j])cnt++;
		}
		printf("#%d %d %d\n",i,min,cnt);
		cnt = 0;
	}
	
}