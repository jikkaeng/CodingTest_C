#include <stdio.h>

#include<string.h>

int main()
{
	int t, n;
	int cnt = 1;
	int s = 1;
	int x = 0, y = 0;
	int x2 = 0, y2 = 0;

	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
	{
		int a[11][11] = { 0 };
		cnt = 1; s = 1; x = 0; y = 0;
		scanf("%d", &n);
		
		for (int j = 0; j < n; j++)
		{
			a[j][n] = 101;
			a[n][j] = 101;
		}
		a[x][y] = cnt;
		cnt++;
		x2 = 0; y2 = 0;
		while (cnt <= n*n)
		{
			
			
			if (s == 1)
			{
				if ((y + 1) == n)y2 = y2;
				else y2 = y+1;
				if (a[x][y2] == 0)
				{
					y++;
					a[x][y] = cnt;
					cnt++;
				}
				else s = 2;
		
			}
			else if (s == 2)
			{
				if ((x + 1) == n)x2 = x2;
				else x2 = x + 1;
				if (a[x2][y] == 0)
				{
					x++;
					a[x][y] = cnt;
					cnt++;
				}
				else s = 3;
		
			}
			else if (s == 3)
			{
				if ((y - 1) < 0)y2 = y2;
				else y2 = y - 1;
				if (a[x][y2] == 0)
				{
					y--;
					a[x][y] = cnt;
					cnt++;
				}
				else s = 4;
				
			}
			else if (s == 4)
			{
				if ((x - 1)<0)x2 = x2;
				else x2 = x - 1;
				if (a[x2][y] == 0)
				{
					x--;
					a[x][y] = cnt;
					cnt++;
				}
				else s = 1;
			
			}
		}
		printf("#%d\n",i);
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				printf("%d ", a[j][k]);
			}printf("\n");
		}
	}
}