#include <stdio.h>
#include <math.h>
int main()
{
	int t,min=0,max=0;
	float sum = 0;
	scanf("%d", &t);
	int a[10];
	for (int i = 1; i <= t; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			scanf("%d", &a[j]);
		}
		min = max = a[0];
		for (int j = 0; j < 10; j++)
		{
			if (a[j] > max)max = a[j];
			if (a[j] < min)min = a[j];
		}
		for (int j = 0; j < 10; j++)
		{
			if (a[j] != max && a[j] != min)sum += a[j];
		}

		printf("#%d %d\n",i, (int)round(sum/8));
		sum = 0;
	}
}
