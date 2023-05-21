#include <stdio.h>

#include<string.h>

int main()

{
	int t,n,k,k2=0;
	int cnt = 0,ck=0;
	int a[15][15] = { 2 };
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
	{
		scanf("%d %d", &n, &k);
		for (int j = 0; j < n; j++)
		{
			for (int z = 0; z < n; z++)
			{
				scanf("%d", &a[j][z]);
			}
		}
		for (int j = 0; j < n; j++)
		{
			for (int z = 0; z <=n-k; z++)
			{
				k2 = z;
				for (int x = 0; x < k; x++)
				{
					if (a[j][k2] == 1)ck += 1;
					if (ck == k)
					{
						if (k2 < n-1)
						{
							if (a[j][k2 + 1] == 0) {
								if (k2 - k >= 0)
								{
									if (a[j][k2 - k] == 0)cnt++;
								}
								else cnt++;
							}
						}
						else if (k2 == n - 1)
						{
							if (k2 - k >= 0)
							{
								if (a[j][k2 - k] == 0)cnt++;
							}
							else cnt++;
						}
							

						
					}
					k2++;
				}
				
				ck = 0;
			}
		}
		
		ck = 0;
		for (int j = 0; j < n; j++)
		{
			for (int z = 0; z <= n - k; z++)
			{
				k2 = z;
				for (int x = 0; x < k; x++)
				{
					if (a[k2][j] == 1)ck += 1;
					if (ck == k)
					{
						if (k2 < n - 1)
						{
							if (a[k2 + 1][j] == 0) {
								if (k2 - k >= 0)
								{
									if (a[k2 - k][j] == 0)cnt++;
								}
								else cnt++;
							}
						}
						else if (k2 == n - 1)
						{
							if (k2 - k >= 0)
							{
								if (a[k2 - k][j] == 0)cnt++;
							}
							else cnt++;
						}

					}
					k2++;
				}

				ck = 0;
			}
		}
		
		ck = 0;
		printf("#%d %d\n",i, cnt);
		cnt = 0;
	}

}