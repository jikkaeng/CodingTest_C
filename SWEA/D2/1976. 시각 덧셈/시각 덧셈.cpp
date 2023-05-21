#include <stdio.h>

#include<string.h>

int main()

{
	int t,min=0,h=0;
	int a[4];
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &a[j]);
		}
		

		min = a[1] + a[3];
		
		h = min / 60;
		
		min = min % 60;
		h = h+a[0] + a[2];
		while (h > 12)
		{
			h=h - 12;
		}
		
		printf("#%d %d %d\n", i, h, min);
	}

}