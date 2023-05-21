#include <stdio.h>
int main()
{
	int t,n;
	int a[10][10] = { 0 };
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
	{
		scanf("%d", &n);
		a[0][0] = 1;
		for (int j = 1; j < n; j++)
		{
			for (int k = 0; k <= j; k++)
			{
				if (k == 0 || k == j)a[j][k] = 1;
				else
				{
					a[j][k] = a[j - 1][k - 1] + a[j - 1][k ];
				}
			}
		}
		printf("#%d\n", i);
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < j + 1; k++)
			{
				printf("%d ", a[j][k]);
			}
			printf("\n");
		}
	}
}
