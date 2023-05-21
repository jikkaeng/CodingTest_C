#include <stdio.h>

int main()
{
	int t;
	int m;
	int a[8] = { 0 };
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
	{
		scanf("%d", &m);
		a[0] = m / 50000;
		m = m % 50000;
		a[1] = m / 10000;
		m = m % 10000;
		a[2] = m / 5000;
		m = m % 5000;
		a[3] = m / 1000;
		m = m % 1000;
		a[4] = m / 500;
		m = m % 500;
		a[5] = m / 100;
		m = m % 100;
		a[6] = m / 50;
		m = m %50;
		a[7] = m / 10;
		printf("#%d\n",i);
		for (int j = 0; j < 8; j++)
		{
			printf("%d ", a[j]);
		}
		printf("\n");
	}
	
}
