#include <stdio.h>

#include<string.h>

int main()

{
	int t;
	int n, n2;
	
	int sum = 0;
	int ok = 0;
	int cnt = 1;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
	{
		int a[10] = { 0 };
		scanf("%d", &n);
		cnt = 1;
		ok = 0;
		while (ok == 0)
		{
			sum = 0;
			n2 = n*cnt;
			while (n2)
			{
				
				a[n2 % 10] = 1;
				n2 /= 10;
			}
			for (int j = 0; j < 10; j++)
			{
				sum += a[j];
			}
			if (sum == 10)
			{
				printf("#%d %d\n", i,n*cnt);
				ok = 1;
			}
			cnt++;
		}
		
	}
	
}