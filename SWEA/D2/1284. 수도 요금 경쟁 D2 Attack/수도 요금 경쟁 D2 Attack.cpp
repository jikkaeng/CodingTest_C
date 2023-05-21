#include <stdio.h>

#include<string.h>

int main()

{
	int t,a=0,b=0;
	int money;
	int p, q, r, s, w;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
	{
		scanf("%d %d %d %d %d",&p, &q, &r, &s, &w);
		a = w * p;
		if (w <= r)b = q;
		else
		{
			b += q;
			b += (w - r)*s;
		}
		if (a > b)money = b;
		else money = a;
		printf("#%d %d\n", i, money);
		a = 0; b = 0;
	}
	
}