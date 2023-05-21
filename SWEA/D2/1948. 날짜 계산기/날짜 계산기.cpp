#include <stdio.h>

int main()
{
	int t;
	int cnt = 0;
	int m,m1,d,d1;
	int a[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
	{
		scanf("%d %d %d %d", &m, &d, &m1, &d1);
		if (m == m1)cnt = d1 - d + 1;

		else
		{
			for (int j = m+1; j <= m1-1; j++)
			{
				for (int k = 1; k <= a[j]; k++)
				{
					cnt++;
				}
			}
			cnt += (a[m] - d + 1 + d1 );
		}
		printf("#%d %d\n",i,cnt);
		cnt = 0;
	}
	
}
