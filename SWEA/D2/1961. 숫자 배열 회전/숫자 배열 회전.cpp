#include <stdio.h>

#include<string.h>

int main()

{
	int t;
	
	scanf("%d", &t);
	int n;
	for (int i = 1; i <= t; i++)
	{
		int a[7][7] = { 0 };
		int b[7][7] = { 0 };
		int c[7][7] = { 0 };
		int d[7][7] = { 0 };
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				scanf("%d", &a[j][k]);
			}
		}
		int cnt = 0;
		for (int j = 0; j < n; j++)//90
		{
			for (int k = n-1; k >= 0; k--)
			{
				b[j][cnt] = a[k][j];
				cnt++;
			}cnt = 0;
		}

	 cnt = 0;
	 int cnt1 = 0;
		for (int j = n-1; j >= 0; j--)//180
		{
			for (int k = n - 1; k >= 0; k--)
			{
				c[cnt1][cnt] = a[j][k];
				cnt++;
			}cnt = 0;
			cnt1++;
		}

		cnt = 0;
		cnt1 = 0;
		for (int j = n - 1; j >= 0; j--)//270
		{
			for (int k = 0; k <n; k++)
			{
				d[cnt1][cnt] = a[k][j];
				cnt++;
			}cnt = 0;
			cnt1++;
		}


		printf("#%d\n", i);
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				printf("%d", b[j][k]);
				
			}printf(" ");
			for (int k = 0; k < n; k++)
			{
				printf("%d", c[j][k]);
			
			}printf(" ");
			for (int k = 0; k < n; k++)
			{
				printf("%d", d[j][k]);
				
			}printf("\n");
		}
	}
	
}