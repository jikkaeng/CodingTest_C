#include <stdio.h>
#include <string.h>
int main()
{
	int t,n,sum=0;
	scanf("%d", &t);

	for (int i = 1; i <= t; i++)
	{
		scanf("%d", &n);
		for (int j = 1; j <= n; j++)
		{
			if (j % 2 == 0)sum -= j;
			else sum += j;
		}
		printf("#%d %d\n",i,sum);
		sum = 0;
	}
}
