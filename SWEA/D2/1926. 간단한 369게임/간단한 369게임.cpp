#include <stdio.h>

int main()
{
	int n,s,cnt=0;
	int a[4];
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		
		a[0] = i / 1000;
		s = i % 1000;
		a[1] = s/100;
		s = s % 100;
		a[2] = s / 10;
		s = s % 10;
		a[3] = s;
		for (int j = 0; j < 4; j++)
		{
			if (a[j] == 3 || a[j] == 6 || a[j] == 9)cnt += 1;
		}
		
		if (cnt == 0)printf("%d ", i);
		else
		{
			for (int j = 0; j < cnt; j++)
			{
				printf("-");
			}printf(" ");
		}
		cnt = 0;
	}
}