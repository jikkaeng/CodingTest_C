#include <stdio.h>

int main()
{
	int t;
	int n,tmp;
	int a[50] = { 0 };
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
	{
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &a[j]);
		}
		tmp = a[0];
		for (int j = 0; j < n; j++)
		{
			for (int k = j+1; k < n; k++)
			{
				if (a[j] > a[k])
				{
					tmp = a[j];
					a[j] = a[k];
					a[k] = tmp;
				}
			}
		}
		printf("#%d ", i);
		for (int j = 0; j < n; j++)
		{
			printf("%d ", a[j]);
		}printf("\n");
	}
	
}
