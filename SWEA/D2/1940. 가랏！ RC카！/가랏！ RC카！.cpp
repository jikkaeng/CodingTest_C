#include <stdio.h>

#include<string.h>

int main()

{
	int t;
	int n, sum = 0, speed = 0,a,b=0;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
	{
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &a);
			if (a == 0)
			{
				
				sum += speed;
			}
			else if (a == 1)
			{
				scanf("%d", &b);
				speed += b;
				sum += speed;
			}
			else
			{
				scanf("%d", &b);
				if (b > speed)speed = 0;
				else
				{
					speed -= b;
				}
				sum += speed;
			}
			
		}
		printf("#%d %d\n", i, sum);
		sum =0;
		speed = 0;
	}

}